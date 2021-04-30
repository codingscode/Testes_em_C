#include <stdio.h>

int main() {
   int var1 = 5, var2 = 5;

   printf("var1 : %d\n", var1);
   printf("var2 : %d\n", var2);
   printf("----------------------\n");
   // 5 eh mostrado
   // entao, var1 eh acrescido para 6
   printf("var1 : %d\n", var1++);

   // var2 eh acrescido para 6
   // entao, it eh mostrado.
   printf("var2 : %d\n", ++var2);

   return 0;
}

/*
var1 : 5
var2 : 5
----------------------
var1 : 5
var2 : 6
*/
