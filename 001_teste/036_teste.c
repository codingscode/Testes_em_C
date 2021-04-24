
#include <stdio.h>

#define  mensagem_para(a, b)  \
   printf(#a " e " #b ": Nos amamos voces !\n")

int main(void) {
   mensagem_para(Carole, Debra);
   return 0;
}

/*
Carole e Debra: Nos amamos voces !
*/
