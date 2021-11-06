#include <stdio.h>



// algoritmo de ordenação Shell Sort
void shell(int *item, int count) {
      register int i, j, gap, k;
      char x, a[5];
      a[0] = 9; a[1] = 5; a[2] = 3; a[3] = 2; a[4] = 1;

      for( k = 0; k < 5; k++) {
            gap = a[ k ];
            for ( i = gap; i < count; i++) {
                  x = item[ i ];
                       for ( j = i – gap; x < item[ j ] && j >= 0; j = j  - gap)
                             item [ j + gap ] = item [ j ] ;
                       item [ j + gap] = x;
            }
      }
}

int main() {
    int numeros[] = { 8, 2, 10, 3, 4, 1 };
    char* ordenado;

    ordenado = shell(numeros, 6);

    for (int i = 0; i < 6; i++) {
       printf("%d ", ordenado[i]);
    }
    

    return 0;
}







