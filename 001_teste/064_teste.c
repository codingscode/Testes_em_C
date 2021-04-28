#include <stdio.h>
#include "064_teste_externo.c"
 
int contador ;
extern void escrever_externo();
 
main() {
   contador = 5;
   escrever_externo();
}

/* 
contador eh 5
*/
