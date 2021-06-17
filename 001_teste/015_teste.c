/* Ponteiros */
#include <stdio.h>


int main () {

   int var1;
   char var2[10];
   int var3 = 4;
   char var4[2] = {"oi"};

   printf("Endereco de variavel var1: %x\n", &var1);
   printf("Endereco de variavel var2: %x\n", &var2);
   printf("Endereco de variavel var3: %x\n", &var3);
   printf("Endereco de variavel var4: %x\n", &var4);

   printf("var1: %d\n", var1);
   printf("var2: %s\n", var2);
   printf("var3: %d\n", var3);
   printf("var4: %s\n", var4);

   return 0;
}

/* 
Endereco de variavel var1: 62fe1c
Endereco de variavel var2: 62fe10
Endereco de variavel var3: 62fe0c
Endereco de variavel var4: 62fe00
var1: 0
var2:
var3: 4
var4: oi
*/
