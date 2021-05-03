#include <stdio.h>

int main() {

   const int entrada_maxima = 100;
   int indice;
   double numero, media, soma = 0.0;

   for (indice = 1; indice <= entrada_maxima; ++indice) {
      printf("%d. Digite um numero: ", indice);
      scanf("%lf", &numero);
      
      // vai para sair se o usuario digitar um numero negativo
      if (numero < 0.0) {
         goto sair;
      }
      soma += numero;
   }

   sair:
   media = soma / (indice - 1);
   printf("Soma = %.2f\n", soma);
   printf("Media = %.2f", media);

   return 0;
}

/* 
1. Digite um numero: 20
2. Digite um numero: 3
3. Digite um numero: 7
4. Digite um numero: -5
Soma = 30.00
Media = 10.00
*/