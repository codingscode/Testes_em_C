#include <stdio.h>


int main() {
   int linhas, indice1, indice2, espaco;
   printf("Digite o numero de linhas:\n");
   scanf("%d", &linhas);
   
   for (indice1 = linhas; indice1 >= 1; --indice1) {
      for (espaco = 0; espaco < linhas - indice1; ++espaco)
         printf("  ");
      for (indice2 = indice1; indice2 <= 2 * indice1 - 1; ++indice2)
         printf("* ");
      for (indice2 = 0; indice2 < indice1 - 1; ++indice2)
         printf("* ");
      printf("\n");
   }
   return 0;
}

/* 
Digite o numero de linhas:
6
* * * * * * * * * * *
  * * * * * * * * *
    * * * * * * *
      * * * * *
        * * *
          *
*/
