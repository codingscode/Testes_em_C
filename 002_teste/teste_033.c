#include <stdio.h>


int main() {
   int ano;
   printf("Digite um um ano:\n");
   scanf("%d", &ano);

   if (ano % 400 == 0 || ano % 4 == 0) {
      printf("%d eh um ano bissexto.", ano);
   }
   
   else {
       if (ano % 100 == 0) {
           printf("%d nao eh um ano bissexto.", ano);
       }
       else {
           printf("%d nao eh um ano bissexto.", ano);
       }
   }

   return 0;
}

/*
Digite um um ano:
1998
1998 nao eh um ano bissexto.

ou

Digite um um ano:
2000
2000 eh um ano bissexto.

*/
