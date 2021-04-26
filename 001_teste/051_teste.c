#include <stdio.h>

int main( int argc, char *argv[] )  {
   //argc = 2;
   

   if( argc == 2 ) {
      printf("O argumento fornecido é %s\n", argv[1]);
   }
   else if( argc > 2 ) {
      printf("Muitos argumentos fornecidos.\n");
   }
   else {
      printf("Um argumento esperado.\n");
   }
}

/* 
Um argumento esperado.
*/
