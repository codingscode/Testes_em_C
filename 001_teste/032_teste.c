#include <stdio.h>


int main() {

   char str[100];
   int inteiro;

   printf("digite 2 valores um abaixo do outro: \n");
   scanf("%s %d", str, &inteiro);

   printf("Voce digitou: %s %d \n", str, inteiro);

   return 0;
}

/* 
digite 2 valores um abaixo do outro:
felicidade
8
Voce digitou: felicidade 8
*/
