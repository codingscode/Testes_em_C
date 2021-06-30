#include <stdio.h>


int main() {
    int numero1, numero2, maximo;
    printf("Digite dois inteiros positivos um abaixo do outro:\n");
    scanf("%d %d", &numero1, &numero2);

    // numero maximo entre numero1 e numero2 eh armazenado em min
    maximo = (numero1 > numero2) ? numero1 : numero2;

    while (1) {
        if (maximo % numero1 == 0 && maximo % numero2 == 0) {
            printf("O minimo multiplo comum de %d e %d eh %d.", numero1, numero2, maximo);
            break;
        }
        ++maximo;
    }
    return 0;
}

/* 
Digite dois inteiros positivos um abaixo do outro:
12
18
O minimo multiplo comum de 12 e 18 eh 36.

ou

Digite dois inteiros positivos um abaixo do outro:
12
21
O minimo multiplo comum de 12 e 21 eh 84.
*/
