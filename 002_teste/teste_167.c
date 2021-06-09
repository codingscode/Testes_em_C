#include <stdio.h>
#include <math.h>


int main() {
   float numero, raiz;
   printf("Digite um numero:\n");
   scanf("%f", &numero);

   // computa a raiz quadrada de numero e o guarda em raiz
   raiz = sqrt(numero);

   printf("Raiz quadrada de %.2f = %.2f", numero, raiz);
   return 0;
}

/* 
Digite um numero:
3
Raiz quadrada de 3.00 = 1.73
*/
