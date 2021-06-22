#include <stdio.h>
#include <stdlib.h>


main() {

   int dividendo = 20;
   int divisor = 5;
   int quociente;
 
   if (divisor == 0) {
      fprintf(stderr, "Divisao por zero! Saindo...\n");
      exit(EXIT_FAILURE);
   }
	
   quociente = dividendo / divisor;
   fprintf(stderr, "Valor de quociente : %d\n", quociente );

   exit(EXIT_SUCCESS);
}

/*
Valor de quociente : 4
*/