#include <stdio.h>


void shellSort(int *vetor, int tamanho) {
   int i, j, gap, k;
   char aux, intervalo[3] = {3, 2, 1};
   
   for (k = 0; k < 3; k++) {
      gap = intervalo[k];

      for (i = gap; i < tamanho; i++) {
         aux = vetor[i];
         for (j = i - gap; aux < vetor[j] && j >= 0; j = j - gap)
            vetor[j + gap] = vetor[j];
         vetor[j + gap] = aux;
      }
   }


}

int main() {


    return 0;
}
 



