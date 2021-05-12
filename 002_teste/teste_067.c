#include <stdio.h>


int main() {
   int linhas, indice1, indice2, numero = 1;
   printf("Digite o numero de linhas:\n");
   scanf("%d", &linhas);
   
   for (indice1 = 1; indice1 <= linhas; indice1++) {
      for (indice2 = 1; indice2 <= indice1; ++indice2) {
         printf("%d ", numero);
         ++numero;
      }
      printf("\n");
   }
   return 0;
}

/* 

*/