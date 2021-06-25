#include <stdio.h>

// declaracao variavel:
extern int a, b;
extern int c;
extern float f;

int main () {

   /* definicao de variavel: */
   int a, b;
   int c;
   float f;
 
   /* inicializacao real */
   a = 10;
   b = 20;
  
   c = a + b;
   printf("valor de c : %d \n", c);

   f = 70.0/3.0;
   printf("valor de f : %f \n", f);
 
   return 0;
}

/* 
valor de c : 30
valor de f : 23.333334
*/