#include <stdio.h>


typedef struct complexo {
    float real;
    float imaginario;
} complexo;

complexo adicionar(complexo n1, complexo n2);

int main() {
    complexo numero1, numero2, resultado;

    printf("Para o primeiro numero complexo:\n");
    printf("Digite as parte real e imaginaria:\n ");
    scanf("%f %f", &numero1.real, &numero1.imaginario);
    printf("\nPara o segundo numero complexo:\n");
    printf("Digite as parte real e imaginaria:\n ");
    scanf("%f %f", &numero2.real, &numero2.imaginario);

    resultado = adicionar(numero1, numero2);

    printf("Soma = %.1f + %.1fi", resultado.real, resultado.imaginario);
    return 0;
}

complexo adicionar(complexo n1, complexo n2) {
    complexo temp;
    temp.real = n1.real + n2.real;
    temp.imaginario = n1.imaginario + n2.imaginario;
    return (temp);
}

/* 
Para o primeiro numero complexo:
Digite as parte real e imaginaria:
 4 7

Para o segundo numero complexo:
Digite as parte real e imaginaria:
 1 5
Soma = 5.0 + 12.0i
*/
