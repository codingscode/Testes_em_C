#include <stdio.h>


int main() {
    int vetor[5] = {1, 2, 3, 4, 5};
    int *ponteiro;

    // ponteiro eh atribuido ao endereco do terceiro elemento
    ponteiro = &vetor[2]; 

    printf("*ponteiro = %d \n", *ponteiro);   // 3
    printf("*(ponteiro + 1) = %d \n", *(ponteiro + 1)); // 4
    printf("*(ponteiro - 1) = %d", *(ponteiro - 1));  // 2

    return 0;
}

/* 
*ponteiro = 3
*(ponteiro + 1) = 4
*(ponteiro - 1) = 2
*/
