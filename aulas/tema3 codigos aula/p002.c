#include <stdio.h>


int main() {
    int vetor[] = {8, 7, 50, -4, 10};

    
    printf("vetor[0]: %d\n", vetor[0]);
    printf("vetor[1]: %d\n", vetor[1]);
    printf("vetor[-1]: %d\n", vetor[-1]);
    printf("vetor[-2]: %d\n", vetor[-2]);

    printf("%x", &vetor);

    return 0;
}

/*
vetor[0]: 8
vetor[1]: 7
vetor[-1]: 0
vetor[-2]: 6480448
62fe00
*/

