#include <stdio.h>
int main( ) {

   char str[100];
   int i;

   printf( "digite 2 valores um abaixo do outro : \n");
   scanf("%s %d", str, &i);

   printf( "\nVoce digitou: %s %d ", str, i);

   return 0;
}

/* 
digite 2 valores um abaixo do outro :
6
7

Voce digitou: 6 7
*/
