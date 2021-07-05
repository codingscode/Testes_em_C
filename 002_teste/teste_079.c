#include <stdio.h>


int checarNumeroPrimo(int n);

int main() {
    int numero1, numero2, indice, presenca;
    printf("Digite dois inteiros positivos:\n");
    scanf("%d %d", &numero1, &numero2);
    printf("Numeros primos entre %d e %d sao:\n", numero1, numero2);

    for (indice = numero1 + 1; indice < numero2; ++indice) {

        // presenca serah igual a 0 se indice for primo
        presenca = checarNumeroPrimo(indice);

        if (presenca == 0)
            printf("%d ", indice);
    }

    return 0;
}

// funcao definido pelo usuario para checar numero primo
int checarNumeroPrimo(int n) {
    int indice2, presenca = 0;

    for (indice2 = 2; indice2 <= n/2; ++indice2) {
        if (n % indice2 == 0) {
            presenca = 1;
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

ou

Digite dois inteiros positivos:
60
100
Numeros primos entre 60 e 100 sao:
61 67 71 73 79 83 89 97
*/
