#include <math.h>
#include <stdio.h>


int main() {
   int numero, numero_original, resto, n = 0;
   float resultado = 0.0;

   printf("Digite um inteiro de tres digitos:\n");
   scanf("%d", &numero);

   numero_original = numero;

   // armazena o numero de digitos de um numero em n
   for (numero_original = numero; numero_original != 0; ++n) {
       numero_original /= 10;
   }

   for (numero_original = numero; numero_original != 0; numero_original /= 10) {
       resto = numero_original % 10;

      // armazena a soma da potencia de digitos individuais no resultado
      resultado += pow(resto, n);
   }

   // se numero eh igual a resultado, o numero eh um numero de Armstrong
   if ((int) resultado == numero)
      printf("%d eh um numero de Armstrong.", numero);
   else
      printf("%d nao eh um numero de Armstrong.", numero);
   return 0;
}

/* 
Digite um inteiro:
371
371 eh um numero de Armstrong.
*/
