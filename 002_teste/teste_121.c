#include <stdio.h>


// funcao para receber elementos de matriz
void receberElementosMatriz(int matriz[][10], int linha, int coluna) {

   printf("\nDigite elementos: \n");

   for (int i = 0; i < linha; ++i) {
      for (int j = 0; j < coluna; ++j) {
         printf("Digite a%d%d: ", i + 1, j + 1);
         scanf("%d", &matriz[i][j]);
      }
   }
}

void multiplicarMatrizes(int primeiro[][10],
                      int segundo[][10],
                      int resultado[][10],
                      int linha1, int coluna1, int linha2, int coluna2) {

   // inicializando elementos de matriz em 0
   for (int i = 0; i < linha1; ++i) {
      for (int j = 0; j < coluna2; ++j) {
         resultado[i][j] = 0;
      }
   }

   // multiplicando primeiro e segundo matrizes e guardando em resultado
   for (int i = 0; i < linha1; ++i) {
      for (int j = 0; j < coluna2; ++j) {
         for (int k = 0; k < coluna1; ++k) {
            resultado[i][j] += primeiro[i][k] * segundo[k][j];
         }
      }
   }
}

// funcao para mostrar a matriz
void mostrar(int resultado[][10], int linha, int coluna) {

   printf("\nMatriz resultado:\n");
   for (int i = 0; i < linha; ++i) {
      for (int j = 0; j < coluna; ++j) {
         printf("%d  ", resultado[i][j]);
         if (j == coluna - 1)
            printf("\n");
      }
   }
}

int main() {
   int primeiro[10][10], segundo[10][10], resultado[10][10], linhas1, colunas1, linhas2, colunas2;
   printf("Digite quantidade de linhas e colunas para o primeiro array:\n");
   scanf("%d %d", &linhas1, &colunas1);
   printf("Digite quantidade de linhas e colunas para segundo array:\n");
   scanf("%d %d", &linhas2, &colunas2);

   // recebendo entrada
   // colunas do 1 array nao eh igual a linha do 2 array
   while (colunas1 != linhas2) {
      printf("Erro! Digite linhas e colunas novamente.\n");
      printf("Digite linhas e colunas para o primeiro array: ");
      scanf("%d%d", &linhas1, &colunas1);
      printf("Digite linhas e colunas para o segundo array: ");
      scanf("%d%d", &linhas2, &colunas2);
   }

   //primeiro array
   receberElementosMatriz(primeiro, linhas1, colunas1);

   //segundo array
   receberElementosMatriz(segundo, linhas2, colunas2);

   multiplicarMatrizes(primeiro, segundo, resultado, linhas1, colunas1, linhas2, colunas2);

   // mostrar the resultado
   mostrar(resultado, linhas1, colunas2);

   return 0;
}

/* 
Digite quantidade de linhas e colunas para o primeiro array:
2 3
Digite quantidade de linhas e colunas para segundo array:
3 2

Digite elementos:
Digite a11: 1
Digite a12: 2
Digite a13: 3
Digite a21: 4
Digite a22: 5
Digite a23: 6

Digite elementos:
Digite a11: 10
Digite a12: 9
Digite a21: 8
Digite a22: 7
Digite a31: 6
Digite a32: 5

Matriz resultado:
44  38
116  101
*/
