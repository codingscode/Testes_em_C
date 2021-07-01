#include <math.h>
#include <stdio.h>


int main() {
    double base, expoente, resultado;
    printf("Digite um numero base:\n");
    scanf("%lf", &base);
    printf("Digite um expoente:\n");
    scanf("%lf", &expoente);

    // calcula a potencia
    resultado = pow(base, expoente);

    printf("%.1lf^%.1lf = %.2lf", base, expoente, resultado);
    return 0;
}

/* 
Digite um numero base:
3
Digite um expoente:
4
3.0^4.0 = 81.00
*/
