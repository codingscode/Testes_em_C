#include <stdio.h>

int main() {
   int inferior, superior, indice, flag, temp;
   printf("Digite dois numeros(intervalo):\n");
   scanf("%d %d", &inferior, &superior);

   // trocar numeros se inferior eh maior que superior
   if (inferior > superior) {
      temp = inferior;
      inferior = superior;
      superior = temp;
   }

   printf("Numeros primos entre %d e %d sao:\n", inferior, superior);
   while (inferior < superior) {
      flag = 0;

      // ignorar numeros menores que 2
      if (inferior <= 1) {
         ++inferior;
         continue;
      }

      for (indice = 2; indice <= inferior / 2; ++indice) {
         if (inferior % indice == 0) {
            flag = 1;
            break;
         }
      }
      if (flag == 0)
         printf("%d ", inferior);
      ++inferior;
   }

   return 0;
}

/* 
Digite dois numeros(intervalo):
6
69
Numeros primos entre 6 e 69 sao:
7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67
*/
