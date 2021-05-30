#include <stdio.h>
#include <string.h>


int main() {
   char minha_string[5][50], temp[50];
   printf("Digite 5 palavras:\n");

   // recebendo string de entrada
   for (int i = 0; i < 5; ++i) {
      fgets(minha_string[i], sizeof(minha_string[i]), stdin);
   }

   // armazenando strings em ordem lexicografica/
   for (int i = 0; i < 5; ++i) {
      for (int j = i + 1; j < 5; ++j) {

         // trocando strings se eles nao estao em ordem lexicografica
         if (strcmp(minha_string[i], minha_string[j]) > 0) {
            strcpy(temp, minha_string[i]);
            strcpy(minha_string[i], minha_string[j]);
            strcpy(minha_string[j], temp);
         }
      }
   }

   printf("\nEm ordem lexicografica: \n");
   for (int i = 0; i < 5; ++i) {
      fputs(minha_string[i], stdout);
   }
   return 0;
}

/* 
Digite 5 palavras:
sol
lua
vento
chuva
neve

Em ordem lexicografica:
chuva
lua
neve
sol
vento
*/
