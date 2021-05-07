#include <stdio.h>


int main() {
    int numero, i, intervalo;
    printf("Digite um inteiro:\n");
    scanf("%d", &numero);
    printf("Digite um intervalo:\n");
    scanf("%d", &intervalo);

    for (i = 1; i <= intervalo; ++i) {
        printf("%d * %d = %d \n", numero, i, numero * i);
    }
    return 0;
}

/*
Digite um inteiro:
7
Digite um intervalo:
3
7 * 1 = 7
7 * 2 = 14
7 * 3 = 21
*/
