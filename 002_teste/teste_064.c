#include <stdio.h>


int main() {
   int indice1, espaco, linhas, k = 0, contador = 0, contador1 = 0;
   printf("Digite o numero de linhas:\n");
   scanf("%d", &linhas);
   for (indice1 = 1; indice1 <= linhas; ++indice1) {
      for (espaco = 1; espaco <= linhas - indice1; ++espaco) {
         printf(" ");
         ++contador;
      }
      while (k != 2 * indice1 - 1) {
         if (contador <= linhas - 1) {
            printf("%d ", indice1 + k);
            ++contador;
         }
         else {
            ++contador1;
            printf("%d ", (indice1 + k - 2 * contador1));
         }
         ++k;
      }
      contador1 = contador = k = 0;
      printf("\n");
   }
   return 0;
}

/* 
Digite o numero de linhas:
9
        1
       2 3 2
      3 4 5 4 3
     4 5 6 7 6 5 4
    5 6 7 8 9 8 7 6 5
   6 7 8 9 10 11 10 9 8 7 6
  7 8 9 10 11 12 13 12 11 10 9 8 7
 8 9 10 11 12 13 14 15 14 13 12 11 10 9 8
9 10 11 12 13 14 15 16 17 16 15 14 13 12 11 10 9

*/
