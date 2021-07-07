#include <stdio.h>


int main() {
    int teste[2][3][2]; // 2*3*2 = 12

    printf("Digite 12 valores:\n");

    for (int i = 0; i < 2; ++i) {
      for (int j = 0; j < 3; ++j) {
        for (int k = 0; k < 2; ++k) {
          scanf("%d", &teste[i][j][k]);
        }
      }
    }

    // imprimindo valores com indice proprio
    printf("\nMostrando valores:\n");
    for (int i = 0; i < 2; ++i) {
      for (int j = 0; j < 3; ++j) {
        for (int k = 0; k < 2; ++k) {
          printf("teste[%d][%d][%d] = %d\n", i, j, k, teste[i][j][k]);
        }
      }
    }

    return 0;
}

/* 
Digite 12 valores:
1
2
3
4
5
6
7
8
9
10
11
12

Mostrando valores:
teste[0][0][0] = 1
teste[0][0][1] = 2
teste[0][1][0] = 3
teste[0][1][1] = 4
teste[0][2][0] = 5
teste[0][2][1] = 6
teste[1][0][0] = 7
teste[1][0][1] = 8
teste[1][1][0] = 9
teste[1][1][1] = 10
teste[1][2][0] = 11
teste[1][2][1] = 12
*/
