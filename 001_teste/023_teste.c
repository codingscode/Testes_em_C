#include <stdio.h>
#include <string.h>
 
union Dado {
   int i;
   float f;
   char str[20];
};
 
int main( ) {

   union Dado dado;        

   printf( "Tamanho de memória ocupado por dado : %d\n", sizeof(dado));

   return 0;
}

/* 
Tamanho de memória ocupado por dado : 20
 */
