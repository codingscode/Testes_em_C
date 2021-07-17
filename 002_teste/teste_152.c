#include <stdio.h>
#include <stdlib.h>


struct curso {
   int marcas;
   char sujeito[30];
};

int main() {
   struct curso *ponteiro;
   int num_registro;
   printf("Digite o numero de registros:\n");
   scanf("%d", &num_registro);

   // alocacao de memoria para structures num_registro
   ponteiro = (struct curso *)malloc(num_registro * sizeof(struct curso));
   for (int i = 0; i < num_registro; ++i) {
      printf("Digite sujeito e marcas:\n");
      scanf("%s %d", (ponteiro + i)->sujeito, &(ponteiro + i)->marcas);
   }

   printf("Mostrando informacao:\n");
   for (int i = 0; i < num_registro; ++i) {
      printf("%s\t%d\n", (ponteiro + i)->sujeito, (ponteiro + i)->marcas);
   }

   free(ponteiro);

   return 0;
}

/* 
Digite o numero de registros:
2
Digite sujeito e marcas:
netshoes 3
Digite sujeito e marcas:
centauro 15
Mostrando informacao:
netshoes        3
centauro        15
*/
