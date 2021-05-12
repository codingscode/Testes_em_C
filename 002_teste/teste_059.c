#include <stdio.h>


int main() {
   int indice, indice2, linhas;
   printf("Digite o numero de linhas:\n");
   scanf("%d", &linhas);
   
   for (indice = 1; indice <= linhas; ++indice) {
      for (indice2 = 1; indice2 <= indice; ++indice2) {
         printf("%d ", indice2);
      }
      printf("\n");
   }
   return 0;
}

/* 
Digite o numero de linhas:
7
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4 5 6
1 2 3 4 5 6 7
*/
