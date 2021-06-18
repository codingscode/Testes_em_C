#include <stdio.h>

int main () {

   char palavra1[4] = {"casas"}; // limita a 4 caracteres
   char palavra2[6] = {'b', 'o', 'r', 'b', 'o', 'l', 'e', 't', 'a', 's'}; // limita a 6 caracteres

   printf("palavra1: %s\n", palavra1);
   printf("palavra2: %s\n", palavra2);

   char cumprimento[6] = {'O', 'l', 'a', '\0'};
   printf("Mensagem de cumprimento: %s\n", cumprimento );
   return 0;
}

/* 
palavra1: casa
palavra2: borbol
Mensagem de cumprimento: Ola
*/
