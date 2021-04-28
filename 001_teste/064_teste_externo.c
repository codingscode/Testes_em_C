#include <stdio.h>
 
extern int contador;
 
void escrever_externo(void) {
   printf("contador eh %d\n", contador);
}
