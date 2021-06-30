#include <stdio.h>


int main() {
    int numero, indice, soma = 0;

    printf("Digite um inteiro positivo:\n");
    scanf("%d", &numero);

    indice = 1;

    while (indice <= numero) {
        soma += indice;
        ++indice;
    } 

    printf("Soma de 0 ate %d => %d", numero, soma);
    return 0;
}

/* 
Digite um inteiro positivo:
7
Soma de 0 ate 7 => 28
*/
