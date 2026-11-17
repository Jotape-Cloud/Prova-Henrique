#include <stdio.h>
int main(void) {
    int valores[] = {12, 7, 12, 9, 4, 9};
    int tamanho = 6;
    int maior = 0, segundo = 0;
    int temMaior = 0, temSegundo = 0;
    
    for (int i = 0; i < tamanho; i++) {
            if(maior < valores[i]){
                maior = valores[i];
                temMaior = 1;
            }
            if (segundo < valores[i] < maior){
                segundo = valores[i];
                temSegundo = 1;
            }
    }
    
    if (temSegundo) {
        printf("Maior: %d\n", maior);
        printf("Segundo maior: %d\n", segundo);
    } else {
        printf("Nao existe segundo maior distinto.\n");
    }
    return 0;
}
