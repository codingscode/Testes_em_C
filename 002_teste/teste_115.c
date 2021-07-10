#include <stdio.h>
#include <stdlib.h>


int main() {
    int quantidade, indice, *ponteiro, soma = 0;

    printf("Digite quantidade de elementos:\n");
    scanf("%d", &quantidade);

    ponteiro = (int*) calloc(quantidade, sizeof(int));
    if (ponteiro == NULL) {
        printf("Erro! memoria nao alocada.");
        exit(0);
    }

    printf("Digite elementos:\n");
    for (indice = 0; indice < quantidade; ++indice) {
        scanf("%d", ponteiro + indice);
        soma += *(ponteiro + indice);
    }

    printf("Soma = %d", soma);
    free(ponteiro);
    return 0;
}

/* 
Digite quantidade de elementos:
3
Digite elementos:
8
3
12
Soma = 23
*/
