#include <stdio.h>


int main() {
   int indice1, indice2, linhas;
   printf("Digite o numero de linhas:\n");
   scanf("%d", &linhas);
   
   for (indice1 = linhas; indice1 >= 1; --indice1) {
      for (indice2 = 1; indice2 <= indice1; ++indice2) {
         printf("* ");
      }
      printf("\n");
   }
   return 0;
}

/* 
Digite o numero de linhas:
6
* * * * * *
* * * * *
* * * *
* * *
* *
*
*/
