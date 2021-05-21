#include <stdio.h>


void mostrarNumeros(int num[2][2]);

int main() {
    int numero[2][2];
    printf("Digite 4 numeros:\n");
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 2; ++j)
            scanf("%d", &numero[i][j]);

    // passando array passing multi-dimensional para uma funcao
    mostrarNumeros(numero);
    return 0;
}

void mostrarNumeros(int num[2][2]) {
    printf("Mostrando:\n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
           printf("%d\n", num[i][j]);
        }
    }
}

/* 
Digite 4 numeros:
3
8
10
1
Mostrando:
3
8
10
1
*/
