#include <stdio.h>


int main() {
   int linhas, coef = 1, espaco, indice1, indice2;
   printf("Digite o numero de linhas:\n");
   scanf("%d", &linhas);
   for (indice1 = 0; indice1 < linhas; indice1++) {
      for (espaco = 1; espaco <= linhas - indice1; espaco++)
         printf("  ");
      for (indice2 = 0; indice2 <= indice1; indice2++) {
         if (indice2 == 0 || indice1 == 0)
            coef = 1;
         else
            coef = coef * (indice1 - indice2 + 1) / indice2;
         printf("%4d", coef);
      }
      printf("\n");
   }
   return 0;
}

/* 
Digite o numero de linhas:
6
               1
             1   1
           1   2   1
         1   3   3   1
       1   4   6   4   1
     1   5  10  10   5   1
*/
