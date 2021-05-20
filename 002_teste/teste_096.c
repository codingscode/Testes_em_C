#include <stdio.h>


int main() {
    float a[2][2], b[2][2], resultado[2][2];

    // recebendo entrada usando aninhado para loop
    printf("Digite elementos da 1 matriz:\n");
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 2; ++j) {
            printf("Digite a%d%d: ", i + 1, j + 1);
            scanf("%f", &a[i][j]);
        }

    // recebendo entrada usando aninhado para loop
    printf("Digite elementos da 2 matriz:\n");
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 2; ++j) {
            printf("Enter b%d%d: ", i + 1, j + 1);
            scanf("%f", &b[i][j]);
        }

    // adicionando elementos correspondentes de duas matrizes
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 2; ++j) {
            resultado[i][j] = a[i][j] + b[i][j];
        }

    // mostrando a soma
    printf("\nSoma da Matriz:\n");

    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 2; ++j) {
            printf("%.1f\t", resultado[i][j]);

            if (j == 1)
                printf("\n");
        }
    return 0;
}

/* 
Digite elementos da 1 matriz:
Digite a11: 1
Digite a12: 2
Digite a21: 3
Digite a22: 4
Digite elementos da 2 matriz:
Enter b11: 5
Enter b12: 6
Enter b21: 7
Enter b22: 8

Soma da Matriz:
6.0     8.0
10.0    12.0
*/
