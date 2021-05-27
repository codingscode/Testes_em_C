#include <stdio.h>


int main(void) {
  char nome[] = "Harry Potter";

  printf("%c", *nome);     // Output: H
  printf("%c", *(nome+1));   // Output: a
  printf("%c", *(nome+7));   // Output: o
  printf("\n\n");

  char *ponteiroNome;

  ponteiroNome = nome;
  printf("%c", *ponteiroNome);     // Output: H
  printf("%c", *(ponteiroNome+1));   // Output: a
  printf("%c", *(ponteiroNome+7));   // Output: o
}

/* 
Hao

Hao
*/
