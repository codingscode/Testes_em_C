#include <stdio.h>


typedef struct Complexo {
    float real;
    float imaginario;
} complexo;

void adicionarNumeros(complexo c1, complexo c2, complexo *result); 

int main() {
    complexo c1, c2, resultado;

    printf("Para o primeiro numero,\n");
    printf("Digite a parte real:\n");
    scanf("%f", &c1.real);
    printf("Digite a parte imaginaria:\n");
    scanf("%f", &c1.imaginario);

    printf("Para o segundo numero, \n");
    printf("Digite a parte real:\n");
    scanf("%f", &c2.real);
    printf("Digite a parte imaginaria:\n");
    scanf("%f", &c2.imaginario);

    adicionarNumeros(c1, c2, &resultado); 
    printf("\nresult.real = %.1f\n", resultado.real);
    printf("resultado.imaginario = %.1f", resultado.imaginario);
    
    return 0;
}

void adicionarNumeros(complexo c1, complexo c2, complexo *result) {
     result->real = c1.real + c2.real;
     result->imaginario = c1.imaginario + c2.imaginario; 
}

/* 
Para o primeiro numero,
Digite a parte real:
6
Digite a parte imaginaria:
3
Para o segundo numero,
Digite a parte real:
1
Digite a parte imaginaria:
-5

result.real = 7.0
resultado.imaginario = -2.0
*/