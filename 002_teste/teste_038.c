#include <stdio.h>


int main() {
    int numero, indice;
    unsigned long long fatorial = 1;
    printf("Digite um inteiro:\n");
    scanf("%d", &numero);

    // mostra erro se o usuario digita um inteiro negativo
    if (numero < 0)
        printf("Erro! Nao existe fatorial de numero negativo.");
    else {
        for (indice = 1; indice <= numero; ++indice) {
            fatorial *= indice;
        }
        printf("Fatorial de %d = %llu", numero, fatorial);
    }

    return 0;
}

/* 
Digite um inteiro:
5
Fatorial de 5 = 120

*/
