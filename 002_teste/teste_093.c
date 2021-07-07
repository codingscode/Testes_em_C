#include <stdio.h>


int main() {
  int valores[5];
  
  printf("Digite 5 inteiros:\n");

  // recebendo entrada e armazenando-a em um array
  for (int indice = 0; indice < 5; ++indice) {
     scanf("%d", &valores[indice]);
  }

  printf("\nMostrando inteiros:\n");

  // imprimindo elementos de um array
  for (int indice2 = 0; indice2 < 5; ++indice2) {
     printf("%d\n", valores[indice2]);
  }
  return 0;
}

/* 
Digite 5 inteiros:
3
5
1
10
6

Mostrando inteiros:
3
5
1
10
6
*/
