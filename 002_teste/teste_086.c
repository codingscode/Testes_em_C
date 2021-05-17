#include <stdio.h>


int potencia(int n1, int n2);

int main() {
    int base, pot, resultado;
    printf("Digite o numero para base:\n");
    scanf("%d", &base);
    printf("Digite um numero para potencia(inteiro positivo):\n");
    scanf("%d", &pot);
    resultado = potencia(base, pot);
    printf("%d^%d = %d", base, pot, resultado);
    return 0;
}

int potencia(int base, int a) {
    if (a != 0)
        return (base * potencia(base, a - 1));
    else
        return 1;
}

/* 
Digite o numero para base:
4
Digite um numero para potencia(inteiro positivo):
3
4^3 = 64
*/
