#include <stdio.h>


int main() {
    char operador;
    double primeiro, segundo;
    printf("Digite um operador (+, -, *, /):\n");
    scanf("%c", &operador);
    printf("Digite dois operandos:\n");
    scanf("%lf %lf", &primeiro, &segundo);

    switch (operador) {
        case '+':
            printf("%.1lf + %.1lf = %.1lf", primeiro, segundo, primeiro + segundo);
            break;
        case '-':
            printf("%.1lf - %.1lf = %.1lf", primeiro, segundo, primeiro - segundo);
            break;
        case '*':
            printf("%.1lf * %.1lf = %.1lf", primeiro, segundo, primeiro * segundo);
            break;
        case '/':
            printf("%.1lf / %.1lf = %.1lf", primeiro, segundo, primeiro / segundo);
            break;
        // operador nao combina com qualquer caso
        default:
            printf("Erro! operador nao esta correto");
    }

    return 0;
}

/* 
Digite um operador (+, -, *, /):
/
Digite dois operandos:
100
7
100.0 / 7.0 = 14.3
*/
