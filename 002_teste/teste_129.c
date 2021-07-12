#include <stdio.h>


int main(void) {
  char nome[] = "Harry Potter";

  printf("%c", *nome);     // saida: H
  printf("%c", *(nome + 1));   // saida: a
  printf("%c", *(nome + 7));   // saida: o
  printf("\n\n");

  char *ponteiroNome;

  ponteiroNome = nome;
  printf("%c", *ponteiroNome);     // saida: H
  printf("%c", *(ponteiroNome + 1));   // saida: a
  printf("%c", *(ponteiroNome + 7));   // saida: o

  printf("\n-------------\n");
  printf("%c\n", ponteiroNome);
  printf("%c\n", ponteiroNome + 1);
  printf("%c\n", ponteiroNome + 2);
}

/* 
Hao

Hao
-------------

☺
☻
*/
