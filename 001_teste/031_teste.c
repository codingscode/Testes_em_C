#include <stdio.h>


int main() {

   char str[100];

   printf("Digite um valor:\n");
   gets(str); // entrada e imprime

   printf("Voce digitou:\n");
   puts(str); // saida e imprime

   return 0;
}

/* 
Digite um valor:
8
Voce digitou:
8

ou

Digite um valor:
qwer
Voce digitou:
qwer
*/
