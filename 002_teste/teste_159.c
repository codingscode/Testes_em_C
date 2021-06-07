#include <stdio.h>


int main() {
   char nome[50];
   int marcas, i, quant_estudantes;

   printf("Digite quantidade de estudantes:\n");
   scanf("%d", &quant_estudantes);

   FILE *ponteiro_arquivo;
   ponteiro_arquivo = (fopen("./teste_159_arquivo.txt", "a"));
   if (ponteiro_arquivo == NULL) {
       printf("Erro!");
       exit(1);
   }

   for (i = 0; i < quant_estudantes; ++i) {
      printf("Para estudante%d\nDigite nome:\n", i+1);
      scanf("%s", nome);

      printf("Digite marcas: ");
      scanf("%d", &marcas);

      fprintf(ponteiro_arquivo,"\nNome: %s \nMarcas=%d \n", nome, marcas);
   }

   fclose(ponteiro_arquivo);
   return 0;
}

/* 
Digite quantidade de estudantes:
3
Para estudante1
Digite nome:
simon
Digite marcas: 2
Para estudante2
Digite nome:
vicente
Digite marcas: 1
Para estudante3
Digite nome:
ferdinand
Digite marcas: 5

escreve/cria arquivo teste_159_arquivo.txt:
Nome: simon 
Marcas=2 

Nome: vicente 
Marcas=1 

Nome: ferdinand 
Marcas=5 

*/
