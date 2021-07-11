#include <stdio.h>


int main() {
  int quantidade;
  double arr[100];
  printf("Digite a quantidade de elementos (1 ateh 100):\n");
  scanf("%d", &quantidade);

  for (int i = 0; i < quantidade; ++i) {
     printf("Digite numero_%d: ", i + 1);
     scanf("%lf", &arr[i]);
  }

  // armazenando o maior numero para arr[0]
  for (int i = 1; i < quantidade; ++i) {
     if (arr[0] < arr[i]) {
        arr[0] = arr[i];
     }
  }

  printf("Maior elemento = %.4lf", arr[0]);

  return 0;
}

/* 
Digite a quantidade de elementos (1 ateh 100):
4
Digite numero_1: 12
Digite numero_2: 3
Digite numero_3: 40
Digite numero_4: 15
Maior elemento = 40.0000
*/
