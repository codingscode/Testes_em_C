// Exemplo com strings
#include <stdio.h>
#include <string.h>  // arquivo de cabeçalho para trabalhar com strings


int main() {
   char Nome[6];  // declara uma string que podera armazenar ate 6 caracteres !! 
   char cumprimento = 'k';
   char frase[5] = {"bom dia certeza"}; // imprime no maximo 5 caracteres
   
   printf("comprimento de Nome[6] : %d\n", sizeof(Nome));

   strcpy(Nome, "Jose da Silva");  // atribui "Jose da Silva" para a variavel Nome
   

   printf("O funcionario %s foi tranferido\n", Nome);  // no lugar de %s aparecera o conteudo da variavel Nome 
   printf("comprimento de Nome[6] : %d\n", sizeof(Nome));
   printf("cumprimento : %c \n", cumprimento);
   printf("frase : %s, comprimento : %d \n", frase, sizeof(frase));
   return (0);
}

/* 
comprimento de Nome[6] : 6
O funcionario Jose da Silva foi tranferido
comprimento de Nome[6] : 6
cumprimento : k
frase : bom d, comprimento : 5
*/
