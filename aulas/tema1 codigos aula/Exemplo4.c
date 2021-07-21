#include <stdio.h>
#include <conio.h>


int main(void) {
      //v_num eh a variavel que serah apontada pelo ponteiro
      int v_num = 10;
      
      //declaracao de variavel ponteiro
      int *ptr;
      
      //atribuindo o endereco da variavel v_num ao ponteiro
      ptr = &v_num;
      
      printf("Utilizando ponteiros\n\n");
      printf("Conteudo da variavel v_num: %d\n", v_num);
      printf("Endereco da variavel v_num: %x \n", &v_num);
      printf("Conteudo da variavel ponteiro ptr: %x", ptr);
      
      getch();
      return(0);
}

/*
Utilizando ponteiros

Conteudo da variavel v_num: 10
Endereco da variavel v_num: 62fe14
Conteudo da variavel ponteiro ptr: 62fe14

*/
