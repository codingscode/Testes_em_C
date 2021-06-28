// programa calcula a soma dos n primeiros numeros naturais
// inteiros positivos 1, 2, 3...n sao conhecidos como numeros naturais

#include <stdio.h>


int main() {
    int numero, contador, soma = 0;

    printf("Digite um inteiro positivo: \n");
    scanf("%d", &numero);

    // loop for encerra quando numero eh menor que contador
    for (contador = 1; contador <= numero; ++contador) {
        soma += contador;
    }

    printf("Soma = %d", soma);

    return 0;
}

/*
Digite um inteiro positivo:
4
Soma = 10
*/
