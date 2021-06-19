#include <stdio.h>
#include <string.h>
 
 
union Dado1 {
   int i;
   float f;
   char str[20];
};

union Dado2 {
   int i;
   float f;
   char str[25];
};
 
int main( ) {

   union Dado1 dado1; 
   union Dado2 dado2;       

   printf("Tamanho de memoria ocupado por dado1 : %d\n", sizeof(dado1));
   printf("Tamanho de memoria ocupado por dado2 : %d\n", sizeof(dado2));

   return 0;
}

/* 
Tamanho de memoria ocupado por dado1 : 20
Tamanho de memoria ocupado por dado2 : 28
*/