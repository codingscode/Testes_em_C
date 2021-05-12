#include <stdio.h>


int main() {
   int indice1, indice2;
   char entrada, letra = 'A';
   printf("Digite uma letra maiuscula que vc quer imprimir na ultima linha:\n");
   scanf("%c", &entrada);
   for (indice1 = 1; indice1 <= (entrada - 'A' + 1); ++indice1) {
      for (indice2 = 1; indice2 <= indice1; ++indice2) {
         printf("%c ", letra);
      }
      ++letra;
      printf("\n");
   }
   return 0;
}

/* 
Digite uma letra maiuscula que vc quer imprimir na ultima linha:
L
A
B B
C C C
D D D D
E E E E E
F F F F F F
G G G G G G G
H H H H H H H H
I I I I I I I I I
J J J J J J J J J J
K K K K K K K K K K K
L L L L L L L L L L L L
*/
