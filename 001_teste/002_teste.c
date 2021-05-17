// Exemplo com strings
#include <stdio.h>
#include <string.h>  // arquivo de cabeçalho para trabalhar com strings


int main() {
   char Nome[2];  // declara uma string que podera armazenar ate 12 caracteres !! 
   char cumprimento = 'k';

   strcpy(Nome, "Jose da Silva");  // atribui "Jose da Silva" para a variavel Nome
   

   printf("O funcionario %s foi tranferido\n", Nome);  // no lugar de %s aparecera o conteudo da variavel Nome 
   printf("cumprimento : %c \n", cumprimento);
   return (0);
}

/* 
O funcionario Jose da Silva foi tranferido
cumprimento : k
*/
