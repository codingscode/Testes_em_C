#include <stdio.h>


int main() {
  int indice, vetor[6], soma = 0;
  printf("Digite 6 numeros:\n");

  for (indice = 0; indice < 6; ++indice) {
      // Equivalente a scanf("%d", &vetor[indice]);
      scanf("%d", vetor + indice);

      // Equivalente a soma += vetor[indice]
      soma += *(vetor + indice);
  }
  printf("Soma = %d", soma);
  return 0;
}

/* 
Digite 6 numeros:
4
2
6
3
1
8
Soma = 24
*/
