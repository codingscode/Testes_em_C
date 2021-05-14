#include <stdio.h>


int soma(int n);

int main() {
    int numero, resultado;

    printf("Digite um inteiro positivo:\n");
    scanf("%d", &numero);

    resultado = soma(numero);

    printf("soma = %d", resultado);
    return 0;
}

int soma(int n) {
    if (n != 0)
        // funcao soma() se chama
        return n + soma(n-1); 
    else
        return n;
}

/* 
Digite um inteiro positivo:
5
soma = 15
*/
