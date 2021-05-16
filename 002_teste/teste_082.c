#include <stdio.h>


int adicionarNumero(int n);

int main() {
    int numero;
    printf("Digite um inteiro positivo:\n");
    scanf("%d", &numero);
    printf("Soma = %d", adicionarNumero(numero));
    return 0;
}

int adicionarNumero(int n) {
    if (n != 0)
        return n + adicionarNumero(n - 1);
    else
        return n;
}

/* 
Digite um inteiro positivo:
7
Soma = 28
*/
