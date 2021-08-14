// Resolve o jogo da Torre de Hanói utilizando recursão
#include <stdio.h>
#include <stdlib.h>

// protótipo da função recursiva
void mover (int n, char Orig, char Temp, char Dest);

int main() {
   mover (3, 'O', 'T','D');
   system("pause");
   return 0;
}

void mover (int n, char Orig, char Temp, char Dest) {
   if (n == 1)
      printf("\nMova o disco 1 da haste %c", Orig, " para a haste %c\n", Dest);
   else {
      mover(n - 1, Orig, Dest, Temp);
      printf("\nMova o disco %d", n, "da haste %c", Orig, " para a haste %c\n", Dest);
      mover(n - 1, Temp, Orig, Dest);
   }
}

/*
Mova o disco 1 da haste O
Mova o disco 2
Mova o disco 1 da haste D
Mova o disco 3
Mova o disco 1 da haste T
Mova o disco 2
Mova o disco 1 da haste O
*/

