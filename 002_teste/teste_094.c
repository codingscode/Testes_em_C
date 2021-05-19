#include <stdio.h>


int main() {
     int indice, num_elementos;
     float media, soma, marks[10];
     media = 0.0;
     soma = 0.0;

     printf("Digite o numero de elementos:\n");
     scanf("%d", &num_elementos);

     for (indice = 0; indice < num_elementos; ++indice) {
          printf("digite inteiro %d: ", indice+1);
          scanf("%f", &marks[indice]);
          
          // adicionando inteiros digitados pelo usuario para a variavel soma
          soma += marks[indice];
     }

     media = soma/num_elementos;
     printf("media = %f", media);

     return 0;
}

/* 
Digite o numero de elementos:
4
digite inteiro 1: 10
digite inteiro 2: 7
digite inteiro 3: 4
digite inteiro 4: 1
media = 5.500000
*/
