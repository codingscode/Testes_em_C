#include <stdio.h>
 
/* declaração de variavel global */
int a = 20;
 
int main () {

  /* declaracao de variavel local na função main */
  int a = 10;
  int b = 20;
  int c = 0;

  printf ("valor de a em main() = %d\n",  a);
  c = somar(a, b);
  printf ("valor de c em main() = %d\n",  c);

  return 0;
}

/*  função para somar 2 inteiros */
int somar(int a, int b) {

   printf ("valor de a em somar() = %d\n",  a);
   printf ("valor de b em somar() = %d\n",  b);

   return a + b;
}

/* 
valor de a em main() = 10
valor de a em somar() = 10
valor de b em somar() = 20
valor de c em main() = 30
*/
