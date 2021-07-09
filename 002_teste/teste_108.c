#include <stdio.h>


int main() {
   int c = 5;
   int *ponteiro = &c;

   /* 
   int *ponteiro = &c;
   
   eh equivalente a :
   
   int *ponteiro:
   ponteiro = &c;
   */
  
   printf("*ponteiro: %d\n", *ponteiro); 
   printf("ponteiro: %d", ponteiro); 
   return 0; 
}

/* 
*ponteiro: 5
ponteiro: 6487572
*/
