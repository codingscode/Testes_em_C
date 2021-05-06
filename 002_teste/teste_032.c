#include <stdio.h>


int main() {
   int ano;
   printf("Digite um um ano:\n");
   scanf("%d", &ano);

   // ano bissexto se perfeitamente divisivel por 400
   if (ano % 400 == 0) {
      printf("%d eh um ano bissexto.", ano);
   }
   // nao um ano bissexto se divisivel por 100
   // mas nao divisivel por 400
   else if (ano % 100 == 0) {
      printf("%d nao eh um ano bissexto.", ano);
   }
   // ano bissexto se nao divisivel por 100
   // mas divisivel por 4
   else if (ano % 4 == 0) {
      printf("%d eh um ano bissexto.", ano);
   }
   // todos outros anos nao sao anos bissextos
   else {
      printf("%d nao eh um ano bissexto.", ano);
   }

   return 0;
}

/*
Digite um um ano:
2000
2000 eh um ano bissexto.
*/
