#include <stdio.h>


int main() {
     int indice, quant_elementos;
     float media, soma, marks[10];
     media = 0.0;
     soma = 0.0;

     printf("Digite a quantidade de elementos:\n");
     scanf("%d", &quant_elementos);

     for (indice = 0; indice < quant_elementos; ++indice) {
          printf("digite inteiro %d: ", indice + 1);
          scanf("%f", &marks[indice]);
          
          // adicionando inteiros digitados pelo usuario para a variavel soma
          soma += marks[indice];
     }

     media = soma/quant_elementos;
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
