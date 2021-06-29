#include <stdio.h>


int main() {
    double numero1, numero2, numero3;
    printf("Digite tres numeros um abaixo do outro:\n");
    scanf("%lf %lf %lf", &numero1, &numero2, &numero3);

    printf("\n*************\n");
    if (numero1 >= numero2) {
        if (numero1 >= numero3)
            printf("%.2lf eh o maior numero.", numero1);
        else
            printf("%.2lf eh o maior numero.", numero3);
    }
    else {
        if (numero2 >= numero3)
            printf("%.2lf eh o maior numero.", numero2);
        else
            printf("%.2lf eh o maior numero.", numero3);
    }

    return 0;
}

/* 
Digite tres numeros um abaixo do outro:
8
50
16

*************
50.00 eh o maior numero.

*/
