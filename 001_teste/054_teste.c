#include <stdio.h>
#include <conio.h>


int main(void) {
  //valor é a variável que
  //será apontada pelo ponteiro
  int valor = 27;
  
  //declaracao de variável ponteiro
  int *ptr;
  
  //atribuindo o endereço da variável valor ao ponteiro
  ptr = &valor;
  
  printf("Utilizando ponteiros\n\n");
  printf ("Conteudo da variavel valor: %d\n", valor);
  printf ("Endereco da variavel valor: %x \n", &valor);
  printf ("Conteudo da variavel ponteiro ptr: %x", ptr);
  
  getch();
  return(0);
}

/* 
Utilizando ponteiros

Conteudo da variavel valor: 27
Endere+�o da variavel valor: 62fe14
Conteudo da variavel ponteiro ptr: 62fe14
*/
