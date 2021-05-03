#include <stdio.h>


int main() {
    double numero, soma = 0;

    // o corpo do loop eh executado pelo menos uma vez
    do {
        printf("Digite um numero que seja diferente de 0.0: \n");
        scanf("%lf", &numero);
        soma += numero;
    }
    while (numero != 0.0);

    printf("Soma = %.2lf",soma);

    return 0;
}

/* 
Digite um numero que seja diferente de 0.0:
5
Digite um numero que seja diferente de 0.0:
3
Digite um numero que seja diferente de 0.0:
2
Digite um numero que seja diferente de 0.0:
0
Soma = 10.00
*/
