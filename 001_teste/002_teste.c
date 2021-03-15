// Exemplo com strings
#include <stdio.h>

#include <string.h>  // arquivo de cabeçalho para trabalhar com strings

int main() {
   char Nome[30];  // declara uma string que poderá armazenar até 29 caracteres !! 
   
   strcpy(Nome, "Jose da Silva");  // atribui "Jose da Silva" para a variável Nome
   printf("O funcionário %s foi tranferido", Nome);  // no lugar de %s aparecerá o 
						     // conteúdo da variável Nome      
   
}