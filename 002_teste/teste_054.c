#include <stdio.h>


int main() {
    int numero, numero_original, resto, resultado = 0;
    printf("Digite um inteiro de 3 digitos:\n");
    scanf("%d", &numero);
    numero_original = numero;

    while (numero_original != 0) {
       // resto contem o ultimo digito
       resto = numero_original % 10;
        
       resultado += pow(resto, 3);
        
       // removendo ultimo digito do numero original
       numero_original /= 10;
    }

    if (resultado == numero)
        printf("%d eh um numero de Armstrong.", numero);
    else
        printf("%d nao eh um numero de Armstrong.", numero);

    return 0;
}

/* 
Digite um inteiro de 3 digitos:
371
371 eh um numero de Armstrong.

ou

Digite um inteiro de 3 digitos:
243
243 nao eh um numero de Armstrong.

*/
