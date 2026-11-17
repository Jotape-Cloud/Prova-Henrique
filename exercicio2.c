#include <stdio.h>

int ehPrimo(int numero) {
    if (numero <= 1) {
        return 0;
    }

    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main(void) {
    printf("%d\n", ehPrimo(1));
    printf("%d\n", ehPrimo(2));
    printf("%d\n", ehPrimo(17));
    printf("%d\n", ehPrimo(21));
    return 0;
}
