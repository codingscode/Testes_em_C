#include <stdio.h>


int main() {
    int base, expoente;
    long long resultado = 1;
    printf("Digite um numero base:\n");
    scanf("%d", &base);
    printf("Digite um expoente:\n");
    scanf("%d", &expoente);

    while (expoente != 0) {
        resultado *= base;
        --expoente;
    }
    printf("Resposta = %lld", resultado);
    return 0;
}

/* 
Digite um numero base:
5
Digite um expoente:
3
Resposta = 125
*/
