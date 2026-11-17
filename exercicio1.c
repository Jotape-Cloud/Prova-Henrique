#include <stdio.h>
int main(void) {
    int contador = 0;
    
    for (int i = 1; i <= 20; i++) {
        if ((i % 3 == 0) != (i % 5 == 0)){
            contador++;
        }
    }
    
    printf("Total: %d\n", contador);
    return 0;
}
