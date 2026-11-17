#include <stdio.h>

int main(void) {
    int limite = 30;

    for (int numero = 1; numero <= limite; numero++) {
        int soma = 0;

        for (int divisor = 1; divisor < numero; divisor++) {
            if (numero % divisor == 0) {
                soma = soma + divisor;
            }
        }

        if (soma == numero) {
            printf("%d\n", numero);
        }
    }

    return 0;
}
