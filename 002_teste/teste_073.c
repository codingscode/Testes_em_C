#include <stdio.h>


void checarPrimoeMostrar(int n);

int main() {
    int numero;

    printf("Digite um inteiro positivo:\n");
    scanf("%d", &numero);

    // numero eh passado to the funcao
    checarPrimoeMostrar(numero);

    return 0;
}

// tipo de retorno eh void significando que nao retorna valor algum
void checarPrimoeMostrar(int numero) {
    int indice, presenca = 0;

    for (indice = 2; indice <= numero/2; ++indice) {
        if (numero % indice == 0) {
            presenca = 1;
            break;
        }
    }
    if (presenca == 1)
        printf("%d nao eh um numero primo.",numero);
    else
        printf("%d eh um numero primo.", numero);
}

/* 
Digite um inteiro positivo:
11
11 eh um numero primo.

ou

Digite um inteiro positivo:
20
20 nao eh um numero primo.
*/
