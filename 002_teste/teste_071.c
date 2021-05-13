#include <stdio.h>


void checarNumeroPrimo();

int main() {
    checarNumeroPrimo();    // argumento nao eh passado
    return 0;
}

// tipo de retorno eh void significando que nao retorna valor algum
void checarNumeroPrimo() {
    int numero, indice, flag = 0;

    printf("Digite um inteiro positivo:\n");
    scanf("%d", &numero);

    for (indice = 2; indice <= numero/2; ++indice) {
        if ( numero % indice == 0 ) {
            flag = 1;
        }
    }
    if (flag == 1)
        printf("%d nao eh um numero primo.", numero);
    else
        printf("%d eh um numero primo.", numero);
}

/* 
Digite um inteiro positivo:
7
7 eh um numero primo.
*/
