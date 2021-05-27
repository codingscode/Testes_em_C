#include <stdio.h>
#include <stdlib.h>


int main() {
  int n;
  double *dados;
  printf("Digitar o numero total de elementos:\n");
  scanf("%d", &n);

  // alocando memoria para n elementos
  dados = (double *) calloc(n, sizeof(double));
  if (dados == NULL) {
    printf("Erro!!! memoria nao alocada.");
    exit(0);
  }

  // guardando numeros digitados
  for (int i = 0; i < n; ++i) {
    printf("Digite numero%d: ", i + 1);
    scanf("%lf", dados + i);
  }

  // encontrando o maior numero
  for (int i = 1; i < n; ++i) {
    if (*dados < *(dados + i))
        *dados = *(dados + i);
  }
  printf("Maior numero = %.2lf", *dados);

  free(dados);

  return 0;
}

/* 
Digitar o numero total de elementos:
3
Digite numero1: 10
Digite numero2: 5
Digite numero3: 8
Maior numero = 10.00
*/
