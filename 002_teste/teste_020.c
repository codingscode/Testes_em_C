// Program to calculate the soma of first n natural numbers
// Positive integers 1,2,3...n are known as natural numbers

#include <stdio.h>
int main() {
    int numero, contador, soma = 0;

    printf("Digite um inteiro positivo: \n");
    scanf("%d", &numero);

    // for loop terminates when numero is less than contador
    for(contador = 1; contador <= numero; ++contador) {
        soma += contador;
    }

    printf("Soma = %d", soma);

    return 0;
}

/*
Digite um inteiro positivo:
4
Soma = 10
*/
