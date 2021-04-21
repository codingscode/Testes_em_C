#include <stdio.h>

int main () {

   int  var = 20;   /* declaração de variavel real */
   int  *ip;        /* declaração de variavel ponteiro */

   ip = &var;  /* armazena endereço de var na variavel ponteiro */

   printf("Endereço da variavel var: %x\n", &var  );

   /* endereço armazenado na variavel ponteiro */
   printf("Endereço armazenado na variavel ip: %x\n", ip );

   /* acessar o valor usando o ponteiro */
   printf("Valor da variavel *ip: %d\n", *ip );

   return 0;
}

/* 
Endereço da variavel var: 957f6b28
Endereço armazenado na variavel ip: 957f6b28
Valor da variavel *ip: 20
 */