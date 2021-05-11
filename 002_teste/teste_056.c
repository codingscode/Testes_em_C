#include <math.h>
#include <stdio.h>


int main() {
   int inferior, superior, numero, numero_original, resto, contador = 0;
   double resultado = 0.0;
   printf("Digite dois numeros(intervalo):\n");
   scanf("%d %d", &inferior, &superior);
   printf("numeros de Armstrong entre %d e %d sao:\n", inferior, superior);

   // iterar numero de (inferior + 1) ate (superior - 1)
   // Em cada iteracao, verificar se numero eh Armstrong
   for (numero = inferior + 1; numero < superior; ++numero) {
      numero_original = numero;

      // numero de calculo de digitos
      while (numero_original != 0) {
         numero_original /= 10;
         ++contador;
      }

      numero_original = numero;

      // resultado contem soma da enesima potencia de digitos individuais
      while (numero_original != 0) {
         resto = numero_original % 10;
         resultado += pow(resto, contador);
         numero_original /= 10;
      }

      // verificar se numero eh igual a soma da enesima potencia de digitos individuais
      if ((int) resultado == numero) {
         printf("%d ", numero);
      }

      // ressetando valores
      contador = 0;
      resultado = 0;
   }

   return 0;
}

/* 
Digite dois numeros(intervalo):
7
1000
numeros de Armstrong entre 7 e 1000 sao:
8 9 153 370 371 407
*/
