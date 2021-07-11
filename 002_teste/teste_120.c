#include <stdio.h>


int main() {
  int quant_linhas, quant_colunas, matriz_a[100][100], matriz_b[100][100], soma[100][100], i, j;

  printf("Digite a quantidade de linhas(entre 1 e 100):\n");
  scanf("%d", &quant_linhas);
  printf("Digite a quantidade de colunas (entre 1 e 100):\n");
  scanf("%d", &quant_colunas);

  printf("\nDigite elementos da primeira matriz:\n");
  for (i = 0; i < quant_linhas; ++i)
     for (j = 0; j < quant_colunas; ++j) {
       printf("Digite elemento matriz_a(%dx%d): ", i + 1, j + 1);
       scanf("%d", &matriz_a[i][j]);
     }

  printf("Digite elementos da segunda matriz:\n");
  for (i = 0; i < quant_linhas; ++i)
     for (j = 0; j < quant_colunas; ++j) {
       printf("Digite elemento matriz_b(%dx%d): ", i + 1, j + 1);
       scanf("%d", &matriz_b[i][j]);
     }

  // adicionando duas matrizes
  for (i = 0; i < quant_linhas; ++i)
     for (j = 0; j < quant_colunas; ++j) {
       soma[i][j] = matriz_a[i][j] + matriz_b[i][j];
     }

  // imprimindo o resultado
  printf("\nSoma das duas matrizes:\n");
  for (i = 0; i < quant_linhas; ++i)
    for (j = 0; j < quant_colunas; ++j) {
      printf("%d   ", soma[i][j]);
      if (j == quant_colunas - 1) {
        printf("\n\n");
      }
    }

  return 0;
}

/* 
Digite a quantidade de linhas(entre 1 e 100):
2
Digite a quantidade de colunas (entre 1 e 100):
3

Digite elementos da primeira matriz:
Digite elemento matriz_a(1x1): 1
Digite elemento matriz_a(1x2): 2
Digite elemento matriz_a(1x3): 3
Digite elemento matriz_a(2x1): 4
Digite elemento matriz_a(2x2): 5
Digite elemento matriz_a(2x3): 6
Digite elementos da segunda matriz:
Digite elemento matriz_b(1x1): 10
Digite elemento matriz_b(1x2): 2
Digite elemento matriz_b(1x3): 8
Digite elemento matriz_b(2x1): 1
Digite elemento matriz_b(2x2): 5
Digite elemento matriz_b(2x3): 0

Soma das duas matrizes:
11   4   11

5   10   6
*/
