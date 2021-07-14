#include <stdio.h>
#include <stdlib.h>


struct pessoa {
   int idade;
   float peso;
   char nome[30];
};

int main() {
   struct pessoa *ponteiro;
   int i, quant_pessoas;

   printf("Digite a quantidade de pessoas:\n");
   scanf("%d", &quant_pessoas);

   // alocando memoria para quant_pessoas quantidade de struct pessoa
   ponteiro = (struct pessoa*) malloc(quant_pessoas * sizeof(struct pessoa));

   for (i = 0; i < quant_pessoas; ++i) {
       printf("Digite o primeiro nome e idade respectivamente:\n");

       // para acessar membros da primeira  struct pessoa,
       // ponteiro->nome e ponteiro->idade eh usado

       // para acessar membros da segunda  struct pessoa,
       // (ponteiro + 1)->nome e (ponteiro + 1)->idade eh usado
       scanf("%s %d", (ponteiro + i)->nome, &(ponteiro + i)->idade);
   }

   printf("Mostrando Informacao:\n");
   for (i = 0; i < quant_pessoas; ++i)
       printf("Nome: %s\tIdade: %d\n", (ponteiro + i)->nome, (ponteiro + i)->idade);

   return 0;
}

/* 
Digite a quantidade de pessoas:
3
Digite o primeiro nome e idade respectivamente:
michael_jackson
49
Digite o primeiro nome e idade respectivamente:
mick_jagger
90
Digite o primeiro nome e idade respectivamente:
stevie_wonder
50
Mostrando Informacao:
Nome: michael_jackson   Idade: 49
Nome: mick_jagger       Idade: 90
Nome: stevie_wonder     Idade: 50
*/