#include <stdio.h>
#include <math.h>


long long converterOctalparaDecimal(int num_oct);

int main() {
    int numero_octal;

    printf("Digite um numero octal:\n");
    scanf("%d", &numero_octal);

    printf("%d de octal = %lld para decimal", numero_octal, converterOctalparaDecimal(numero_octal));
    return 0;
}

long long converterOctalparaDecimal(int num_oct) {
    int numero_decimal = 0, expoente = 0;

    while (num_oct != 0) {
        numero_decimal += (num_oct % 10) * pow(8, expoente);
        ++expoente;
        num_oct /= 10;
    }

    expoente = 1;
    return numero_decimal;
}

/* 
Digite um numero octal:
46
46 de octal = 38 para decimal

ou

Digite um numero octal:
23
23 de octal = 19 para decimal

ou

Digite um numero octal:
275
275 de octal = 189 para decimal
*/
