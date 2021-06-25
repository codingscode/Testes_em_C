#include <stdio.h>


int main() {
   const int  COMPRIMENTO = 10;
   const int  LARGURA = 5;
   const char QUEBRALINHA = '\n';
   int area;  
   
   area = COMPRIMENTO * LARGURA;
   printf("valor da area : %d", area);
   printf("%c", QUEBRALINHA);
   printf("%c", QUEBRALINHA);
   printf("fim");

   return 0;
}

/*
valor da area : 50

fim
*/