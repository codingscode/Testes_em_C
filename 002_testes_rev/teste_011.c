#include <stdio.h>


int main() {
    int numero;
    printf("Digite um inteiro:\n");
    scanf("%d", &numero);

    if(numero % 2 == 0)
        printf("%d eh par.", numero);
    else
        printf("%d eh impar.", numero);
    
    return 0;
}

/* 
Digite um inteiro:
8
8 eh par.

ou

Digite um inteiro:
5
5 eh impar.

*/
