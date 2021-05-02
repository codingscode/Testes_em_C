#include <stdio.h>


int main() {
    int numero;

    printf("Digite um inteiro: \n");
    scanf("%d", &numero);

    // true se numero eh menor que 0
    if (numero < 0) {
        printf("\nVoce digitou %d.\n", numero);
    }

    printf("\nA sentenca if eh facil.");

    return 0;
}

/*
Digite um inteiro:
-5

Voce digitou -5.

A sentenca if eh facil.
*/