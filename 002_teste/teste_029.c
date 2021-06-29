#include <ctype.h>
#include <stdio.h>


int main() {
   char c;
   int vogal_minuscula, vogal_maiuscula;

   printf("Digite uma letra:\n");
   scanf("%c", &c);

   // avalia para 1 se variavel c eh uma vogal minuscula
   vogal_minuscula = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y');

   // avalia para 1 se variavel c eh uma vogal maiuscula
   vogal_maiuscula = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y');

   // Mostra mensagem de erro se c nao eh uma letra
   if (!isalpha(c))
      printf("Erro! caractere nao alfabetico.");
   else if (vogal_minuscula || vogal_maiuscula)
      printf("%c eh uma vogal.", c);
   else
      printf("%c eh uma consoante.", c);

   return 0;
}

/* 
Digite uma letra:
6
Erro! caractere nao alfabetico.

*/