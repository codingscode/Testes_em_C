#include <stdio.h>


int main() {
    int numero, indice, soma = 0;

    printf("Digite um inteiro positivo:\n");
    scanf("%d", &numero);

    for (indice = 1; indice <= numero; ++indice) {
        soma += indice;
    }

    printf("Soma de 0 ate %d => %d", numero, soma);
    return 0;
}

/* 
Digite um inteiro positivo:
4
Soma de 0 ate 4 => 10
*/
