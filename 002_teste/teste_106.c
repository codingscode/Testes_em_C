#include <stdio.h>


int main() {
   int *ponteiro, c;
   
   c = 22;
   printf("Endereco de c: %p\n", &c);
   printf("Valor de c: %d\n\n", c); 
   
   ponteiro = &c;
   printf("Endereco de pointer ponteiro: %p\n", ponteiro);
   printf("Conteudo de pointer ponteiro: %d\n\n", *ponteiro);
   
   c = 11;
   printf("Endereco de pointer ponteiro: %p\n", ponteiro);
   printf("Conteudo de pointer ponteiro: %d\n\n", *ponteiro);
   
   *ponteiro = 2;
   printf("Endereco de c: %p\n", &c);
   printf("Valor de c: %d\n\n", c);
   return 0;
}

/* 
Endereco de c: 000000000062FE14
Valor de c: 22

Endereco de pointer ponteiro: 000000000062FE14
Conteudo de pointer ponteiro: 22

Endereco de pointer ponteiro: 000000000062FE14
Conteudo de pointer ponteiro: 11

Endereco de c: 000000000062FE14
Valor de c: 2
*/
