#include <stdio.h>


int main() {
    int numero1, numero2;

    printf("Digite dois numeros inteiros um apos outro:\n");
    scanf("%d %d", &numero1, &numero2);

    while (numero1 != numero2) {
        if (numero1 > numero2)
            numero1 -= numero2;
        else
            numero2 -= numero1;
    }
    printf("Maior divisor comum = %d",numero1);

    return 0;
    
}

/*
Digite dois numeros inteiros um apos outro:
12
18
Maior divisor comum = 6
*/
