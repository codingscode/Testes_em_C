#include <stdio.h>


int main() {
   int indice, espaco, linhas, k = 0;
   printf("Digite o numero de linhas:\n");
   scanf("%d", &linhas);
   for (indice = 1; indice <= linhas; ++indice, k = 0) {
      for (espaco = 1; espaco <= linhas - indice; ++espaco) {
         printf("  ");
      }
      while (k != 2 * indice - 1) {
         printf("* ");
         ++k;
      }
      printf("\n");
   }
   return 0;
}

/* 
Digite o numero de linhas:
10
                  *
                * * *
              * * * * *
            * * * * * * *
          * * * * * * * * *
        * * * * * * * * * * *
      * * * * * * * * * * * * *
    * * * * * * * * * * * * * * *
  * * * * * * * * * * * * * * * * *
* * * * * * * * * * * * * * * * * * *
*/