#include <stdio.h>
#include <string.h>

struct {
   unsigned int idade : 3;
} Idade;

int main( ) {

   Idade.idade = 4;
   printf( "Tamanhode( Idade ) : %d\n", sizeof(Idade) );
   printf( "Idade.idade : %d\n", Idade.idade );

   Idade.idade = 7;
   printf( "Idade.idade : %d\n", Idade.idade );

   Idade.idade = 8;
   printf( "Idade.idade : %d\n", Idade.idade );

   return 0;
}

/* 
Tamanhode( Idade ) : 4
Idade.idade : 4
Idade.idade : 7
Idade.idade : 0
*/
