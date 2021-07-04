#include <stdio.h>


int checarNumeroPrimo(int n);

int main() {
    int numero1, numero2, indice, presenca;
    printf("Digite dois inteiros positivos:\n");
    scanf("%d %d", &numero1, &numero2);
    printf("Numeros primos entre %d e %d sao:\n", numero1, numero2);

    for (indice = numero1 + 1; indice < numero2; ++indice) {

        // presenca serah igual a 1 se indice for primo
        presenca = checarNumeroPrimo(indice);

        if (presenca == 1)
            printf("%d ", indice);
    }

    return 0;
}

// funcao definido pelo usuario para checar numero primo
int checarNumeroPrimo(int n) {
    int indice2, presenca = 1;

    for (indice2 = 2; indice2 <= n/2; ++indice2) {
        if (n % indice2 == 0) {
            presenca = 0;
            break;
        }
    }
    return presenca;
}

/* 
Digite dois inteiros positivos:
3
50
Numeros primos entre 3 e 50 sao:
5 7 11 13 17 19 23 29 31 37 41 43 47
*/