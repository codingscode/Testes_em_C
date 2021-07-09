#include <stdio.h>


int main() {
   int vetor[4];
   int indice;

   for (indice = 0; indice < 4); ++indice) {
      printf("&vetor[%d] = %p\n", indice, &vetor[indice]);
   }

   printf("Endereco de array vetor: %p", vetor);

   return 0;
}

/* 
&vetor[0] = 000000000062FE00
&vetor[1] = 000000000062FE04
&vetor[2] = 000000000062FE08
&vetor[3] = 000000000062FE0C
Endereco de array vetor: 000000000062FE00
*/
