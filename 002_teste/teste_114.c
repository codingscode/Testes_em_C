#include <stdio.h>
#include <stdlib.h>


int main() {
    int numero, indice, *ponteiro, soma = 0;

    printf("Digite numero de elementos:\n");
    scanf("%d", &numero);

    ponteiro = (int*) malloc(numero * sizeof(int));
 
    // se momoria nao pode ser alocada
    if (ponteiro == NULL) {
        printf("Erro! memoria nao alocada.");
        exit(0);
    }

    printf("Digite elementos:\n");
    for (indice = 0; indice < numero; ++indice) {
        scanf("%d", ponteiro + indice);
        soma += *(ponteiro + indice);
    }

    printf("Soma = %d", soma);
  
    // desalocando a memoria
    free(ponteiro);

    return 0;
}

/* 
Digite numero de elementos:
4
Digite elementos:
10
1
8
5
Soma = 24
*/
