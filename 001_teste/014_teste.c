#include <stdio.h>
 
int main () {

   int n[ 10 ]; /* n é uma array de 10 inteiros */
   int i, j;
 
   /* inicializar elementos da array n em 0 */         
   for ( i = 0; i < sizeof(n); i++ ) {
      n[ i ] = i + 100; /* coloque elemento na locacao i a i+100 */
   }
   
   /* saida de cada valor do elemento array */
   for (j = 0; j < 10; j++ ) {
      printf("Elemento[%d] = %d\n", j, n[j]);
   }
 
   return 0;
}

/* 
Elemento[0] = 100
Elemento[1] = 101
Elemento[2] = 102
Elemento[3] = 103
Elemento[4] = 104
Elemento[5] = 105
Elemento[6] = 106
Elemento[7] = 107
Elemento[8] = 108
Elemento[9] = 109
*/
