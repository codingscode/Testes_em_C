#include <stdio.h>

#define COMPRIMENTO 10   
#define LARGURA  5
#define NOVALINHA '\n'

int main() {
   int area;  
  
   area = COMPRIMENTO * LARGURA;
   printf("valor de area : %d", area);
   printf("%c", NOVALINHA);

   return 0;
}

/* 
valor de area : 50
*/
