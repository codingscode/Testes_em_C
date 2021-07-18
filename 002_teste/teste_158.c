#include <stdio.h>


int main() {
   char nome[50];
   int marcas, i, quantidade;

   printf("Digite quantidade de estudantes:\n");
   scanf("%d", &quantidade);

   FILE *ponteiro_arquivo;
   ponteiro_arquivo = (fopen("./teste_158_arquivo.bin", "w"));
   if (ponteiro_arquivo == NULL) {
       printf("Erro!");
       exit(1);
   }

   for (i = 0; i < quantidade; ++i) {
      printf("Para estudante%d\nDigite nome:\n", i + 1);
      scanf("%s", nome);

      printf("Digite marcas:\n");
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
Digite marcas:
6
Para estudante2
Digite nome:
vicente
Digite marcas:
2
Para estudante3
Digite nome:
ferdinand
Digite marcas:
4


escreve arquivo teste_158_arquivo.bin:

Nome: simon 
Marcas=6 

Nome: vicente 
Marcas=2 

Nome: ferdinand 
Marcas=4 
*/