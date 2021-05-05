#include <math.h>
#include <stdio.h>


int main() {
    double a, b, c, discriminante, raiz_1, raiz_2, realPart, parte_imaginaria;
    printf("Digite coeficientes a, b e c:\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminante = b * b - 4 * a * c;

    // condicao para real e raizes diferentes
    if (discriminante > 0) {
        raiz_1 = (-b + sqrt(discriminante)) / (2 * a);
        raiz_2 = (-b - sqrt(discriminante)) / (2 * a);
        printf("raiz_1 = %.2lf e raiz_2 = %.2lf", raiz_1, raiz_2);
    }

    // condicao para real e raizes iguais
    else if (discriminante == 0) {
        raiz_1 = raiz_2 = -b / (2 * a);
        printf("raiz_1 = raiz_2 = %.2lf;", raiz_1);
    }

    // se as raizes nao sao reais
    else {
        realPart = -b / (2 * a);
        parte_imaginaria = sqrt(-discriminante) / (2 * a);
        printf("raiz_1 = %.2lf+%.2lfi e raiz_2 = %.2f-%.2fi", realPart, parte_imaginaria, realPart, parte_imaginaria);
    }

    return 0;
} 

/* 
Digite coeficientes a, b e c:
2
5
3
raiz_1 = -1.00 e raiz_2 = -1.50

ou

Digite coeficientes a, b e c:
4
2
10
raiz_1 = -0.25+1.56i e raiz_2 = -0.25-1.56i

*/
