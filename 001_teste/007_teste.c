#include <stdio.h>
 
/* declaracao de funcao */
void funcao(void);
 
static int contador = 5; /* variavel global */
 
main() {

   while (contador--) {
      funcao();
   }
	
   return (0);
}

/* definicao de funcao */
void funcao( void ) {

   static int i = 5; /* variavel estatica local */
   i++;

   printf("i eh %d e contador eh %d\n", i, contador);
}

/*
i eh 6 e contador eh 4
i eh 7 e contador eh 3
i eh 8 e contador eh 2
i eh 9 e contador eh 1
i eh 10 e contador eh 0
*/

