#include <stdio.h>


int main() {
    int numero1, numero2;
    printf("Digite dois inteiros uma abaixo do outro: \n");
    scanf("%d %d", &numero1, &numero2);

    // verifica se os inteiros são iguais
    if (numero1 == numero2) {
        printf("Resultado: %d = %d",numero1,numero2);
    }

    // verifica se numero1 eh maior que numero2
    else if (numero1 > numero2) {
        printf("Resultado: %d > %d", numero1, numero2);
    }

    // verifica se ambas expressoes sao false
    else {
        printf("Resultado: %d < %d",numero1, numero2);
    }

    return 0;
}

/* 
Digite dois inteiros uma abaixo do outro:
8
3
Resultado: 8 > 3
*/
