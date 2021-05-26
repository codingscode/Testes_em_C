#include <stdio.h>


int main() {
  int matriz[10][10], transposta[10][10], linha, coluna;
  printf("Digite linhas e colunas:\n");
  scanf("%d %d", &linha, &coluna);

  // atribuindo elementos a matriz
  printf("\nDigite elementos da matriz:\n");
  for (int i = 0; i < linha; ++i)
    for (int j = 0; j < coluna; ++j) {
        printf("Digite element matriz(%dx%d): ", i + 1, j + 1);
        scanf("%d", &matriz[i][j]);
    }

  // imprimindo a matriz
  printf("\nMatriz digitada:\n");
  for (int i = 0; i < linha; ++i)
    for (int j = 0; j < coluna; ++j) {
      printf("%d  ", matriz[i][j]);
      if (j == coluna - 1)
        printf("\n");
    }

  // computando a transposta
  for (int i = 0; i < linha; ++i)
    for (int j = 0; j < coluna; ++j) {
      transposta[j][i] = matriz[i][j];
    }

  // imprimindo a transposta
  printf("\nTransposta da matriz:\n");
  for (int i = 0; i < coluna; ++i)
    for (int j = 0; j < linha; ++j) {
      printf("%d  ", transposta[i][j]);
      if (j == linha - 1)
        printf("\n");
    }
  return 0;
}

/* 
Digite linhas e colunas:
2
3

Digite elementos da matriz:
Digite element matriz(1x1): 1
Digite element matriz(1x2): 2
Digite element matriz(1x3): 3
Digite element matriz(2x1): 4
Digite element matriz(2x2): 5
Digite element matriz(2x3): 6

Matriz digitada:
1  2  3
4  5  6

Transposta da matriz:
1  4
2  5
3  6
*/
