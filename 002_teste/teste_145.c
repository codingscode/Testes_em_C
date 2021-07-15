#include <stdio.h>


union trabalhoUniao {
   //definindo uma union
   char nome[32];
   float salario;
   int trabalhador;
} trabUniao;

struct structTrabalho {
   char nome[32];
   float salario;
   int trabalhador;
} sTrabalho;

int main() {
   printf("tamanho de union = %d bytes\n", sizeof(trabUniao));
   printf("tamanho de structure = %d bytes", sizeof(sTrabalho));
   return 0;
}

/* 
tamanho de union = 32 bytes
tamanho de structure = 40 bytes
*/