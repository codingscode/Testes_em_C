#include <stdio.h>


int receberInteiro();

int main() {
    int numero, indice, presenca = 0;

   // nenhum argumento eh passado
    numero = receberInteiro();    

    for (indice = 2; indice <= numero/2; ++indice) {
        if (numero % indice == 0) {
            presenca = 1;
            break;
        }
    }

    if (presenca == 1)
        printf("%d nao eh um numero primo.", numero);
    else
        printf("%d eh um numero primo.", numero);

    return 0;
}

// retorna inteiro digitado pelo usuario
int receberInteiro() {
    int numero;

    printf("Digite um inteiro positivo:\n");
    scanf("%d", &numero);

    return numero;
}

/* 
Digite um inteiro positivo:
11
11 eh um numero primo.

ou

Digite um inteiro positivo:
16
16 nao eh um numero primo.
*/
