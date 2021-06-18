#include <stdio.h>
#include <string.h>


int main () {

   char string_1[12] = "Ola";
   char string_2[12] = "Pessoal";
   char string_3[12];
   int  comprimento ;

   /* copiar string_1 para string_3 */
   strcpy(string_3, string_1);
   printf("strcpy( string_3, string_1) :  %s\n", string_3 );

   /* concatenar string_1 e string_2 */
   strcat( string_1, string_2);
   printf("strcat( string_1, string_2):   %s\n", string_1 );

   /* comprimento total de string_1 depois concatenação */
   comprimento = strlen(string_1);
   printf("strlen(string_1) :  %d\n", comprimento );

   return 0;
}

/* 
strcpy( string_3, string_1) :  Ola
strcat( string_1, string_2):   OlaPessoal
strlen(string_1) :  10
*/
