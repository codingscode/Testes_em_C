#include <stdio.h>


int main() {
   int inferior, superior, indice, flag;
   printf("Digite dois numeros(intervalos):\n");
   scanf("%d %d", &inferior, &superior);
   printf("Numeros primos entre %d e %d sao: ", inferior, superior);

   // iteracao ate inferior nao eh igual a to superior
   while (inferior < superior) {
      flag = 0;

      // ignorar numeros menores que 2
      if (inferior <= 1) {
         ++inferior;
         continue;
      }

      // se inferior eh numero nao primo, flag serah 1
      for (indice = 2; indice <= inferior / 2; ++indice) {

         if (inferior % indice == 0) {
            flag = 1;
            break;
         }
      }

      if (flag == 0)
         printf("%d ", inferior);

      // para checar primo para o proximo numero
      // aumentar inferior em 1
      ++inferior;
   }

   return 0;
}

/* 
Digite dois numeros(intervalos):
4
37
Numeros primos entre 4 e 37 sao: 5 7 11 13 17 19 23 29 31
*/
