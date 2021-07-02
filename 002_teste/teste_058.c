#include <stdio.h>


int main() {
   int indice, indice2, linhas;
   printf("Digite o numero de linhas:\n");
   scanf("%d", &linhas);
   printf("\n");
   for (indice = 1; indice <= linhas; ++indice) {
      for (indice2 = 1; indice2 <= indice; ++indice2) {
         printf("* ");
      }
      printf("\n");
   }
   return 0;
}

/* 
Digite o numero de linhas:
5

*
* *
* * *
* * * *
* * * * *

*/
