#include <stdio.h>


int main () {

   int var = 20;   /* declaracao de variavel real */
   int *ip;        /* declaracao de variavel ponteiro */

   ip = &var;  /* armazena endereco de var na variavel ponteiro */

   printf("Endereco da variavel var: %x\n", &var);

   /* endereco armazenado na variavel ponteiro */
   printf("Endereco armazenado na variavel ip: %x\n", ip);

   /* acessar o valor usando o ponteiro */
   printf("Valor da variavel *ip: %d\n", *ip);

   return 0;
}

/* 
Endereco da variavel var: 62fe14
Endereco armazenado na variavel ip: 62fe14
Valor da variavel *ip: 20
*/
