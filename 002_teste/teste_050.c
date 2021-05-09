#include <stdio.h>


int main() {
    int numero, numero_invertido = 0, resto, numero_original;
    printf("Digite um inteiro:\n");
    scanf("%d", &numero);
    numero_original = numero;

    // inteiro invertido eh armazenado no numero_invertido
    while (numero != 0) {
        resto = numero % 10;
        numero_invertido = numero_invertido * 10 + resto;
        numero /= 10;
    }

    // palindromo se numero_original e numero_invertido sao iguais
    if (numero_original == numero_invertido)
        printf("%d eh um palindromo.", numero_original);
    else
        printf("%d eh nao um palindromo.", numero_original);

    return 0;
}

/* 
Digite um inteiro:
72527
72527 eh um palindromo.

ou

Digite um inteiro:
7242
7242 eh nao um palindromo.
*/
