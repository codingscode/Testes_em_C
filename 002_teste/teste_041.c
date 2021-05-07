#include <stdio.h>


int main() {
    int numero1, numero2, indice, maior_divisor_comum;

    printf("Digite dois numeros inteiros um apos outro:\n");
    scanf("%d %d", &numero1, &numero2);

    for (indice = 1; indice <= numero1 && indice <= numero2; ++indice) {
        // verifica se indice eh fator de ambos inteiros
        if (numero1 % indice == 0 && numero2 % indice == 0)
            maior_divisor_comum = indice;
    }

    printf("Maior divisor comum de %d e %d eh %d", numero1, numero2, maior_divisor_comum);

    return 0;
}

/*
Digite dois numeros inteiros um apos outro:
12
18
Maior divisor comum de 12 e 18 eh 6
*/
