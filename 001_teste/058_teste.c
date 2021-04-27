#include <stdio.h>

#define COMPRIMENTO 10   
#define LARGURA  5
#define NOVALINHA '\n'

int main() {
   int area;  
  
   area = COMPRIMENTO * LARGURA;
   printf("valor da area : %d", area);
   printf("%c", NOVALINHA);
   printf("%c", NOVALINHA);
   printf("fim");

   return 0;
}

/*
valor da area : 50

fim
*/
