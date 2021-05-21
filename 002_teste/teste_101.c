#include <stdio.h>


int main() {
  int variavel = 5;
  printf("variavel: %d\n", variavel);

  // note o uso de & antes de variavel
  printf("endereco de variavel: %p", &variavel);  
  return 0;
}

/* 
variavel: 5
endereco de variavel: 000000000062FE1C
*/
