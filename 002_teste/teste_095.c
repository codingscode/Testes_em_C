// programa c para armazenar temperatura de duas cidades da semana e mostrar
#include <stdio.h>


const int CIDADE = 2;
const int SEMANA = 7;

int main() {
    int temperatura[CIDADE][SEMANA];

    // usando loop aninhado para armazenar valores no segundo array
    for (int indice1 = 0; indice1 < CIDADE; ++indice1) {
      for (int indice2 = 0; indice2 < SEMANA; ++indice2) {
        printf("Cidade %d, Dia %d: ", indice1 + 1, indice2 + 1);
        scanf("%d", &temperatura[indice1][indice2]);
      }
    }

    printf("\nMostrando valores:\n\n");

    // usando loop aninhado para mostrar valores no segundo array
    for (int indice3 = 0; indice3 < CIDADE; ++indice3) {
      for (int indice4 = 0; indice4 < SEMANA; ++indice4) {
        printf("Cidade %d, Dia %d = %d\n", indice3 + 1, indice4 + 1, temperatura[indice3][indice4]);
      }
    }
    return 0;
}

/* 
Cidade 1, Dia 1: 40
Cidade 1, Dia 2: 30
Cidade 1, Dia 3: 27
Cidade 1, Dia 4: 28
Cidade 1, Dia 5: 28
Cidade 1, Dia 6: 28
Cidade 1, Dia 7: 30
Cidade 2, Dia 1: 21
Cidade 2, Dia 2: 18
Cidade 2, Dia 3: 18
Cidade 2, Dia 4: 18
Cidade 2, Dia 5: 22
Cidade 2, Dia 6: 21
Cidade 2, Dia 7: 30

Mostrando valores:

Cidade 1, Dia 1 = 40
Cidade 1, Dia 2 = 30
Cidade 1, Dia 3 = 27
Cidade 1, Dia 4 = 28
Cidade 1, Dia 5 = 28
Cidade 1, Dia 6 = 28
Cidade 1, Dia 7 = 30
Cidade 2, Dia 1 = 21
Cidade 2, Dia 2 = 18
Cidade 2, Dia 3 = 18
Cidade 2, Dia 4 = 18
Cidade 2, Dia 5 = 22
Cidade 2, Dia 6 = 21
Cidade 2, Dia 7 = 30
*/
