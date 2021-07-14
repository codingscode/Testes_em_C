#include <stdio.h>


struct pessoa {
   int idade;
   float peso;
};

int main() {
    struct pessoa *ponteiroPessoa, pessoa1;
    ponteiroPessoa = &pessoa1;   

    printf("Digite idade:\n");
    scanf("%d", &ponteiroPessoa->idade);

    printf("Digite peso:\n");
    scanf("%f", &ponteiroPessoa->peso);

    printf("\nMostrando:\n");
    printf("Idade: %d\n", ponteiroPessoa->idade);
    printf("Peso: %f", ponteiroPessoa->peso);

    return 0;
}

/* 
Digite idade:
21
Digite peso:
80
Mostrando:
Idade: 21
Peso: 80.000000
*/
