#include <stdio.h>

int main() {
   const int  COMPRIMENTO = 10;
   const int  LARGURA = 5;
   const char NOVALINHA = '\n';
   int area;  
   
   area = COMPRIMENTO * LARGURA;
   printf("valor de area : %d", area);
   printf("%c", NOVALINHA);

   return 0;
}