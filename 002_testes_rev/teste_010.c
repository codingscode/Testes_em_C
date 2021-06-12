#include <stdio.h>


int main() {
    double valor_a, valor_b;
    printf("Digite valor_a:\n");
    scanf("%lf", &valor_a);
    printf("Digite valor_b:\n");
    scanf("%lf", &valor_b);

    // trocando

   // valor_a = (inicial_a - inicial_b)
    valor_a = valor_a - valor_b;   

   // valor_b = (inicial_a - inicial_b) + inicial_b = inicial_a
    valor_b = valor_a + valor_b;

   // valor_a = inicial_a - (inicial_a - inicial_b) = inicial_b
    valor_a = valor_b - valor_a;

    // %.2lf mostra numero acima de 2 pontos decimal
    printf("depois de trocar, valor_a = %.2lf\n", valor_a);
    printf("depois de trocar, valor_b = %.2lf", valor_b);
    return 0;
}

/* 
Digite valor_a:
7
Digite valor_b:
2
depois de trocar, valor_a = 2.00
depois de trocar, valor_b = 7.00
*/
