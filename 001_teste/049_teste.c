/* 
void *calloc(int num, int size); -> This function allocates an array of num elements each of which size in bytes will be size.
	
void free(void *address); -> This function releases a block of memory block specified by address.

void *malloc(int num); -> This function allocates an array of num bytes and leave them uninitialized.

void *realloc(void *address, int newsize); -> This function re-allocates memory extending it upto newsize.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {

   char nome[100];
   char *descricao;

   strcpy(nome, "Zara Ali");

   /* alocar memoria dinamicamente */
   descricao = malloc( 200 * sizeof(char) );
   printf("Descricao: %s\n", descricao );
	
   if ( descricao == NULL ) {
      fprintf(stderr, "Erro - inapto a alocar memoria requerida\n");
   }
   else {
      strcpy( descricao, "Zara ali, uma aluna DPS na 10 classe");
   }
   
   printf("Nome = %s\n", nome );
   printf("Descricao: %s\n", descricao );
}

/* 
Descricao: ÓX«
Nome = Zara Ali
Descricao: Zara ali, uma aluna DPS na 10 classe
*/
