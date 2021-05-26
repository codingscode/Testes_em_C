#include <stdio.h>


void alternarCiclic(int *a, int *b, int *c);

int main() {
    int numero1, numero2, numero3;

    printf("Digite numero1, numero2 e numero3 respectivamente:\n");
    scanf("%d %d %d", &numero1, &numero2, &numero3);

    printf("Valor antes da alternancia:\n");
    printf("numero1 = %d \nnumero2 = %d \nnumero3 = %d\n", numero1, numero2, numero3);

    alternarCiclic(&numero1, &numero2, &numero3);

    printf("Valor depois da alternancia:\n");
    printf("numero1 = %d \nnumero2 = %d \nnumero3 = %d", numero1, numero2, numero3);

    return 0;
}

void alternarCiclic(int *n1, int *n2, int *n3) {
    int temp;
    // alternar em ordem ciclica
    temp = *n2;
    *n2 = *n1;
    *n1 = *n3;
    *n3 = temp;
}

/* 
Digite numero1, numero2 e numero3 respectivamente:
1
2
3
Valor antes da alternancia:
numero1 = 1
numero2 = 2
numero3 = 3
Valor depois da alternancia:
numero1 = 3
numero2 = 1
numero3 = 2
*/
