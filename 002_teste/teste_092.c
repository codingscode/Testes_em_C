#include <math.h>
#include <stdio.h>


long long converter(int oct);

int main() {
    int octal;
    printf("Digite um numero octal:\n");
    scanf("%d", &octal);
    printf("%d de octal = %lld para binario", octal, converter(octal));
    return 0;
}

long long converter(int oct) {
    int decimal = 0, expoente = 0;
    long long binario = 0;

    // convertendo octal para decimal
    while (oct != 0) {
        decimal += (oct % 10) * pow(8, expoente);
        ++expoente;
        oct /= 10;
        printf("decimal -> %d\n", decimal);
    }
    expoente = 1;

   // convertendo decimal para binary
    while (decimal != 0) {
        binario += (decimal % 2) * expoente;
        decimal /= 2;
        expoente *= 10;
    }
    return binario;
}

/* 
Digite um numero octal:
34
decimal -> 4
decimal -> 28
34 de octal = 11100 para binario

ou

Digite um numero octal:
16
decimal -> 6
decimal -> 14
16 de octal = 1110 para binario
*/
