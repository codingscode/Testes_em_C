// Program to create a simple calculator
#include <stdio.h>

int main() {
    char operador;
    double numero1, numero2;

    printf("Digite um operador (+, -, *, /): \n");
    scanf("%c", &operador);
    printf("Digite dois operadores um abaixo do outro: \n");
    scanf("%lf %lf",&numero1, &numero2);

    switch(operador) {
        case '+':
            printf("%.1lf + %.1lf = %.1lf",numero1, numero2, numero1+numero2);
            break;

        case '-':
            printf("%.1lf - %.1lf = %.1lf",numero1, numero2, numero1-numero2);
            break;

        case '*':
            printf("%.1lf * %.1lf = %.1lf",numero1, numero2, numero1*numero2);
            break;

        case '/':
            printf("%.1lf / %.1lf = %.1lf",numero1, numero2, numero1/numero2);
            break;

        // operador não combina com qualquer constante +, -, *, /
        default:
            printf("Erro! operador nao eh correto.");
    }

    return 0;
}

/* 
Digite um operador (+, -, *, /):
+
Digite dois operadores um abaixo do outro:
3
6
3.0 + 6.0 = 9.0

ou

Digite um operador (+, -, *, /):
?
Digite dois operadores um abaixo do outro:
9
3
Erro! operador nao eh correto.
*/
