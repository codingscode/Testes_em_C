#include <stdio.h>


int checarPrimo(int n);

int main() {
    int numero, indice1, flag = 0;
    printf("Digite um inteiro positivo:\n");
    scanf("%d", &numero);

    for (indice1 = 2; indice1 <= numero / 2; ++indice1) {
        // condicao para indice1 ser um numero primo
        if (checarPrimo(indice1) == 1) {
            // condicao para numero-indice1 ser um numero primo
            if (checarPrimo(numero - indice1) == 1) {
                printf("%d = %d + %d\n", numero, indice1, numero - indice1);
                flag = 1;
            }
        }
    }
    if (flag == 0)
        printf("%d nao pode ser expressado como a soma de dois numeros primos.", numero);

    return 0;
}

// funcao para checar numero primo
int checarPrimo(int n) {
    int indice2, ehPrimo = 1;

    for (indice2 = 2; indice2 <= n / 2; ++indice2) {
        if (n % indice2 == 0) {
            ehPrimo = 0;
            break;
        }
    }
    return ehPrimo;
}

/* 
Digite um inteiro positivo:
9
9 = 2 + 7

ou

Digite um inteiro positivo:
7
7 = 2 + 5

ou

Digite um inteiro positivo:
19
19 = 2 + 17

*/
