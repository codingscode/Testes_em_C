#include <stdio.h>
#include <string.h>


struct {
   unsigned int idade : 3;
} Idade;

int main() {

   Idade.idade = 4; // limite 3 + 4 = 7. acima disto vai de 0 em diante
   printf("Tamanho de( Idade ) : %d\n", sizeof(Idade) );
   printf("Idade.idade : %d\n", Idade.idade );

   Idade.idade = 7;
   printf("Idade.idade : %d\n", Idade.idade );

   Idade.idade = 8;
   printf("Idade.idade : %d\n", Idade.idade );
   
   Idade.idade = 6;
   printf("Idade.idade : %d\n", Idade.idade );
   
   Idade.idade = 9;
   printf("Idade.idade : %d\n", Idade.idade );
   
   Idade.idade = 10;
   printf("Idade.idade : %d\n", Idade.idade );
   
   Idade.idade = 12;
   printf("Idade.idade : %d\n", Idade.idade );

   return 0;
}

/* 
Tamanho de( Idade ) : 4
Idade.idade : 4
Idade.idade : 7
Idade.idade : 0
Idade.idade : 6
Idade.idade : 1
Idade.idade : 2
Idade.idade : 4
*/
