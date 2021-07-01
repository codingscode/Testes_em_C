#include <stdio.h>


int main() {
    int numero, rev = 0, resto;
    printf("Digite um numero inteiro:\n");
    scanf("%d", &numero);
    
    while (numero != 0) {
        resto = numero % 10;
        rev = rev * 10 + resto;
        numero /= 10;
    }
    printf("Numero invertido = %d", rev);
    return 0;
}

/* 
Digite um numero inteiro:
427
Numero invertido = 724
*/