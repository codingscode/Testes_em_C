#include <stdio.h>


int adicionarNumeros(int a, int b);         // prototipo de funcao

int main() {
    int numero1, numero2, soma;

    printf("Digite dois numeros:\n");
    scanf("%d %d", &numero1, &numero2);

    soma = adicionarNumeros(numero1, numero2);        // chama funcao
    printf("soma = %d", soma);

    return 0;
}

int adicionarNumeros(int a, int b) {        // definicao de funcao

    int resultado;
    resultado = a + b;
    return resultado;                  // retorno
}

/*
Digite dois numeros:
6
7
soma = 13
*/