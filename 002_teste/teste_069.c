#include <stdio.h>
#include <math.h>


int main() {
   float numero, raiz;
   printf("Digite um numero:\n");
   scanf("%f", &numero);

   // Computa a raiz quadrada do numero e armazena em raiz.
   raiz = sqrt(numero);

   printf("Raiz quadrada de %.6f = %.6f", numero, raiz);
   return 0;
}

/* 
Digite um numero:
7
Raiz quadrada de 7.000000 = 2.645751
*/
