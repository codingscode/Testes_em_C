#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

   char nome[100];
   char *descricao;

   strcpy(nome, "Zara Ali");

   /* alocar memoria dinamicamente */
   descricao = malloc( 30 * sizeof(char) );
	
   if( descricao == NULL ) {
      fprintf(stderr, "Erro - inapto a alocar memoria requerida\n");
   }
   else {
      strcpy( descricao, "Zara ali uma estudante DPS.");
   }
	
   /* suponha voce quer armazenar descricao maior */
   descricao = realloc( descricao, 100 * sizeof(char) );
	
   if( descricao == NULL ) {
      fprintf(stderr, "Erro - inapto a alocar memoria requerida\n");
   }
   else {
      strcat( descricao, "Ela esta na 10 serie");
   }
   
   printf("Nome = %s\n", nome );
   printf("Descricao: %s\n", descricao );

   /* liberar memoria usando funcao free() */
   free(descricao);
}

/* 
Nome = Zara Ali
Descricao: Zara ali uma estudante DPS.Ela esta na 10 serie
*/
