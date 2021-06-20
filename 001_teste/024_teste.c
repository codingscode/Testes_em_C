#include <stdio.h>
#include <string.h>


union Dado {
   int i;
   float f;
   char string[20];
};
 
int main() {

   union Dado dado;        

   dado.i = 10;
   dado.f = 220.5;
   strcpy( dado.string, "Programacao em C");

   printf("dado.i : %d\n", dado.i);
   printf("dado.f : %f\n", dado.f);
   printf("dado.string : %s\n", dado.string);

   return 0;
}

/* 
dado.i : 1735357008
dado.f : 1130754282837771100000000.000000
dado.string : Programacao em C
*/
