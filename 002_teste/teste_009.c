#include <stdio.h>


int main() {
   int var1 = 5, var2 = 8;

   printf("var1 : %d\n", var1);
   printf("var2 : %d\n", var2);
   printf("----------------------\n");
   // 5 eh mostrado
   // entao, var1 eh acrescido para 6
   printf("var1 : %d\n", var1++); // nao eh acrescido de imediato

   // var2 eh acrescido para 6
   // entao, eh mostrado.
   printf("var2 : %d\n", ++var2);  // eh acrescido de imediato
   printf("----------------------\n");
   printf("var1 : %d\n", var1++); // nao eh acrescido de imediato
   printf("var2 : %d\n", ++var2);  // eh acrescido de imediato

   return 0;
}

/*
var1 : 5
var2 : 8
----------------------
var1 : 5
var2 : 9
----------------------
var1 : 6
var2 : 10
*/
