/* Ponteiros */

#include <stdio.h>

int main () {

   int var1;
   char var2[10];

   printf("Endereço de variavel var1: %x\n", &var1  );
   printf("Endereço de variavel var2: %x\n", &var2  );

   return 0;
}

/* 
Endereço de variavel var1: 3bad2278
Endereço de variavel var2: 3bad226e
 */
