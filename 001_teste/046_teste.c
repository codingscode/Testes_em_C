#include <stdio.h>
#include <locale.h>


unsigned long long int fatorial(unsigned int i) {

   if(i <= 1) {
      return 1;
   }
   return i * fatorial(i - 1);
}

int  main() {
   int i = 12;
   printf("Fatorial de %d é %d\n", i, fatorial(i), setlocale(LC_ALL,""));
   return 0;
}

/* 
Fatorial de 12 é 479001600
*/
