/* 
há 4 tipos de classe de armazenamento:
    automatic
    external
    static
    register
*/

#include <stdio.h>

int main(void) {
  
  for (int i = 0; i < 5; ++i) {
     printf("C programming");
  }
  
 // Erro: i nao eh declarado neste ponto
  printf("%d", i);  
  return 0;
}

/* 

*/