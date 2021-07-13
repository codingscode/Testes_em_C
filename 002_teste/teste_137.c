#include <stdio.h>


int main() {
   char linha[150];
   
   printf("Digite uma string:\n");
   fgets(linha, sizeof(linha), stdin); // recebe entrada


   for (int i = 0, j; linha[i] != '\0'; ++i) {

      // entra no loop se o caractere nao eh uma letra
      // e nao eh um caractere vazio
      while (!(linha[i] >= 'a' && linha[i] <= 'z') && !(linha[i] >= 'A' && linha[i] <= 'Z') && !(linha[i] == '\0')) {
         for (j = i; linha[j] != '\0'; ++j) {

            // se jth elemento de linha nao eh uma letra,
            // atribua o valor de elemento (j + 1)th ao elemento jth
            linha[j] = linha[j + 1];
         }
         linha[j] = '\0';
      }
   }
   printf("String de saida:\n");
   puts(linha);
   return 0;
}

/* 
Digite uma string:
p2'r-o@gram84iz./
String de saida:
programiz

ou

Digite uma string:
uma andorinha no fio
String de saida:
umaandorinhanofio
*/
