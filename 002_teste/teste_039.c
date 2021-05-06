#include <stdio.h>


int main() {
    int numero, indice;
    printf("Digite um inteiro:\n");
    scanf("%d", &numero);

    for (indice = 1; indice <= 10; ++indice) {
        printf("%d * %d = %d \n", numero, indice, numero * indice);
    }
    return 0;
}

/* 
Digite um inteiro:
6
6 * 1 = 6
6 * 2 = 12
6 * 3 = 18
6 * 4 = 24
6 * 5 = 30
6 * 6 = 36
6 * 7 = 42
6 * 8 = 48
6 * 9 = 54
6 * 10 = 60
*/
