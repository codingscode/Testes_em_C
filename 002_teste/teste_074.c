#include <stdio.h>


int checarNumeroPrimo(int n);

int main() {
    int numero, flag;

    printf("Digite um inteiro positivo:\n");
    scanf("%d",&numero);

    // numero eh passado a funcao checarNumeroPrimo()
    // o valor retornado eh atribuido a variavel flag
    flag = checarNumeroPrimo(numero);

    if (flag == 1)
        printf("%d nao eh um numero primo", numero);
    else
        printf("%d eh um numero primo", numero);

    return 0;
}

// int eh returned from the function
int checarNumeroPrimo(int n) {
    int indice;

    for (indice = 2; indice <= n/2; ++indice) {
        if ( n%indice == 0 )
            return 1;
    }

    return 0;
}

/* 
Digite um inteiro positivo:
19
19 eh um numero primo
*/
