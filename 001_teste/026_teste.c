#include <stdio.h>
#include <string.h>

/* definir estrutura simples */
struct {
   unsigned int larguraValidada;
   unsigned int alturaValidada;
} status1;

/* definir uma estrutura com campos bit */
struct {
   unsigned int larguraValidada : 1;
   unsigned int alturaValidada : 1;
} status2;
 
int main( ) {
   printf( "Tamanho de memória ocupado por status1 : %d\n", sizeof(status1));
   printf( "Tamanho de memória ocupado por status2 : %d\n", sizeof(status2));
   return 0;
}

/* 
Tamanho de memória ocupado por status1 : 8
Tamanho de memória ocupado por status2 : 4
*/