#include <stdio.h>
#include <string.h>  // arquivo de cabeçalho para trabalhar com strings


int main() {

   char citacao[4] = {"ir vir rir"}; // imprimindo apenas os 4 primeiros caracteres
   char letra = 'x'; // tem que ser aspas simples
   char cumprimentos[6] = {"bom dia galera"}; // imprimindo apenas os 6 primeiros caracteres
   char frase1[20] = {"o dia estah bom"};

   printf("citacao: %s, tamanho : %d\n", citacao, sizeof(citacao));
   printf("letra: %c, tamanho : %d\n", letra, sizeof(letra));
   printf("cumprimentos: %s, tamanho : %d\n", cumprimentos, sizeof(cumprimentos));
   printf("frase1: %s, tamanho : %d\n", frase1, sizeof(frase1));
      
}

/* 
citacao: ir v, tamanho : 4
letra: x, tamanho : 1
cumprimentos: bom di, tamanho : 6
frase1: o dia estah bom, tamanho : 20
*/
