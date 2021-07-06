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
    int octal = 0, decimal = 0, expoente = 0;

    // convertendo binario para decimal
    while (bin != 0) {
        decimal += (bin % 10) * pow(2, expoente);
        ++expoente;
        bin /= 10;
        printf("decimal -> %d\n", decimal);
    }
    expoente = 1;

    // convertendo decimal para octal
    while (decimal != 0) {
        octal += (decimal % 8) * expoente;
        decimal /= 8;
        expoente *= 10;
    }
    return octal;
}

/* 
Digite um numero binario:
11011
decimal -> 1
decimal -> 3
decimal -> 3
decimal -> 11
decimal -> 27
11011 de binario = 33 para octal

ou

Digite um numero binario:
111
decimal -> 1
decimal -> 3
decimal -> 7
111 de binario = 7 para octal

ou

Digite um numero binario:
111001
decimal -> 1
decimal -> 1
decimal -> 1
decimal -> 9
decimal -> 25
decimal -> 57
111001 de binario = 71 para octal
*/
