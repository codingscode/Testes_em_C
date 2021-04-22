#include <stdio.h>
#include <string.h>
 
union Dado {
   int i;
   float f;
   char string[20];
};
 
int main( ) {

   union Dado dado;        

   dado.i = 10;
   printf( "dado.i : %d\n", dado.i);
   
   dado.f = 220.5;
   printf( "dado.f : %f\n", dado.f);
   
   strcpy( dado.string, "Programação em C");
   printf( "dado.string : %s\n", dado.string);

   return 0;
}

/* 
dado.i : 10
dado.f : 220.500000
dado.string : Programação em C
*/
