#include <stdio.h>
#include <stdlib.h>


int main() {
    int *ponteiro, indice, numero1, numero2;
    printf("Digite tamanho:\n");
    scanf("%d", &numero1);

    ponteiro = (int*) malloc(numero1 * sizeof(int));

    printf("Enderecos de memoria previamente alocados:\n");

    for (indice = 0; indice < numero1; ++indice)
         printf("%u\n", ponteiro); 

    printf("\nDigite o novo tamanho:\n");
    scanf("%d", &numero2);

    // realocando a memoria
    ponteiro = realloc(ponteiro, numero2 * sizeof(int));

    printf("Enderecos de memoria recem-alocada:\n");
    for (indice = 0; indice < numero2; ++indice)
         printf("%u\n", ponteiro); 
  
    free(ponteiro);

    return 0;
}

/* 
Digite tamanho:
4
Enderecos de memoria previamente alocados:
10294368
10294368
10294368
10294368

Digite o novo tamanho:
6
Enderecos de memoria recem-alocada:
10294368
10294368
10294368
10294368
10294368
10294368
*/
