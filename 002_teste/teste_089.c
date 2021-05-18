#include <stdio.h>
#include <math.h>


int converterDecimalparaOctal(int num_dec);

int main() {
    int numero_decimal;

    printf("Digite um numero decimal:\n");
    scanf("%d", &numero_decimal);

    printf("%d de decimal = %d para octal", numero_decimal, converterDecimalparaOctal(numero_decimal));

    return 0;
}

int converterDecimalparaOctal(int num_dec) {
    int numero_octal = 0, indice = 1;

    while (num_dec != 0) {
        numero_octal += (num_dec % 8) * indice;
        num_dec /= 8;
        indice *= 10;
    }

    return numero_octal;
}

/* 
Digite um numero decimal:
36
36 de decimal = 44 para octal

ou

Digite um numero decimal:
14
14 de decimal = 16 para octal

*/
