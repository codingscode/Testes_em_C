#include <stdio.h>


int main() {
    int numero1, numero2, indice, mdc, mmc;
    printf("Digite dois inteiros positivos um abaixo do outro:\n");
    scanf("%d %d", &numero1, &numero2);

    for (indice = 1; indice <= numero1 && indice <= numero2; ++indice) {
        
        // verifica se indice eh um fator de ambos inteiros
        if (numero1 % indice == 0 && numero2 % indice == 0)
            mdc = indice;
    }

    mmc = (numero1 * numero2) / mdc;

    printf("O minimo multiplo comum dos numeros %d e %d eh %d.", numero1, numero2, mmc);
    return 0;
}

/* 
Digite dois inteiros positivos um abaixo do outro:
6
8
O minimo multiplo comum dos numeros 6 e 8 eh 24.
*/
