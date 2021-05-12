#include <stdio.h>


int main() {
    int numero, indice;
    printf("Digite um inteiro positivo:\n");
    scanf("%d", &numero);
    printf("Fatores de %d sao: ", numero);

    for (indice = 1; indice <= numero; ++indice) {
        if (numero % indice == 0) {
            printf("%d ", indice);
        }
    }
    return 0;
}

/* 
Digite um inteiro positivo:
28
Fatores de 28 sao: 1 2 4 7 14 28
*/
