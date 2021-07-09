#include <stdio.h>
#include <stdlib.h>


int main() {
    int quantidade_num, indice, *ponteiro, soma = 0;

    printf("Digite quantidade de elementos:\n");
    scanf("%d", &quantidade_num);

    ponteiro = (int*) malloc(quantidade_num * sizeof(int));
 
    // se momoria nao pode ser alocada
    if (ponteiro == NULL) {
        printf("Erro! memoria nao alocada.");
        exit(0);
    }

    printf("Digite elementos:\n");
    for (indice = 0; indice < quantidade_num; ++indice) {
        scanf("%d", ponteiro + indice);
        soma += *(ponteiro + indice);
    }

    printf("Soma = %d", soma);
  
    // desalocando a memoria
    free(ponteiro);

    return 0;
}

/* 
Digite quantidade_num de elementos:
4
Digite elementos:
10
1
8
5
Soma = 24
*/
