#include <math.h>
#include <stdio.h>


int converter(long long bin);

int main() {
    long long binario;
    printf("Digite um numero binario:\n");
    scanf("%lld", &binario);
    printf("%lld de binario = %d para octal", binario, converter(binario));
    return 0;
}

int converter(long long bin) {
    int octal = 0, decimal = 0, indice = 0;

    // convertendo binario para decimal
    while (bin != 0) {
        decimal += (bin % 10) * pow(2, indice);
        ++indice;
        bin /= 10;
    }
    indice = 1;

    // convertendo decimal para octal
    while (decimal != 0) {
        octal += (decimal % 8) * indice;
        decimal /= 8;
        indice *= 10;
    }
    return octal;
}

/* 
Digite um numero binario:
11011
11011 de binario = 33 para octal

ou

Digite um numero binario:
111
111 de binario = 7 para octal
*/
