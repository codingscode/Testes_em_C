#include <stdio.h>


int main() {
    int numero1, numero2;
    printf("Digite dois numeros um abaixo do outro: \n");
    scanf("%d %d", &numero1, &numero2);

    if (numero1 >= numero2) {
        if (numero1 == numero2) {
           printf("Resultado: %d = %d", numero1, numero2);
        }
        else {
           printf("Resultado: %d > %d", numero1, numero2);
        }
    }
    else {
        printf("Resultado: %d < %d", numero1, numero2);
    }

    return 0;
}

/*
Digite dois numeros um abaixo do outro:
8
4
Resultado: 8 > 4
*/
