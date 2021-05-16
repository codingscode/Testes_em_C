#include<stdio.h>


long int multiplicarNumeros(int n);

int main() {
    int numero;
    printf("Digite um inteiro positivo:\n");
    scanf("%d", &numero);
    printf("Fatorial de %d = %ld", numero, multiplicarNumeros(numero));

    return 0;
}

long int multiplicarNumeros(int n) {
    if (n >= 1)
        return n * multiplicarNumeros(n - 1);
    else
        return 1;
}

/* 
Digite um inteiro positivo:
5
Fatorial de 5 = 120
*/
