#include <stdio.h>
 
/* declaração de variavel global */
int g;
 
int main () {

  /* declaracao de variavel local */
  int a, b;
 
  /* inicialização atual */
  a = 10;
  b = 20;
  g = a + b;
 
  printf ("valor de a = %d, b = %d e g = %d\n", a, b, g);
 
  return 0;
}
