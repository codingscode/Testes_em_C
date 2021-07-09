#include <stdio.h>


void trocar(int *n1, int *n2);

int main() {
    int numero1 = 5, numero2 = 10;

    // endereco de numero1 e numero2 eh passado
    trocar( &numero1, &numero2 );

    printf("numero1 = %d\n", numero1);
    printf("numero2 = %d", numero2);
    return 0;
}

void trocar(int* n1, int* n2) {
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

/* 
numero1 = 10
numero2 = 5
*/
