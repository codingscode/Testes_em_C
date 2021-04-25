#include <stdio.h>
#include <stdlib.h>

main() {

   int dividendo = 20;
   int divisor = 0;
   int quociente;
 
   if( divisor == 0){
      fprintf(stderr, "Divisao por zero! Saindo...\n");
      exit(-1);
   }
   
   quociente = dividendo / divisor;
   fprintf(stderr, "Valor de quociente : %d\n", quociente );

   exit(0);
}

/*
Divisao por zero! Saindo...
*/
