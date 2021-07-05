#include <math.h>
#include <stdio.h>


int converter(long long n);

int main() {
    long long numero;
    printf("Digite um numero binario:\n");
    scanf("%lld", &numero);
    printf("%lld de binario = %d para decimal", numero, converter(numero));
    return 0;
}

int converter(long long n) {
    int decimal = 0, indice = 0, resto;
    while (n != 0) {
        resto = n % 10;
        n /= 10;
        decimal += resto * pow(2, indice);
        ++indice;
    }
    return decimal;
}

/* 
Digite um numero binario:
1101
1101 de binario = 13 para decimal

ou

Digite um numero binario:
1000110
1000110 de binario = 70 para decimal


*/
