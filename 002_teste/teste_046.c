#include <stdio.h>


int main() {
    long long n;
    int contador = 0;
    printf("Digite um numero inteiro:\n");
    scanf("%lld", &n);
 
    // itera ate n tornar-se 0
    // remove ultimo digito de n em cada iteracao
    // aumenta contador em 1 em cada iteracao
    while (n != 0) {
        n /= 10;     // n = n/10
        ++contador;
    }

    printf("Numero de digitos: %d", contador);
}

/*
Digite um numero inteiro:
8360
Numero de digitos: 4
*/
