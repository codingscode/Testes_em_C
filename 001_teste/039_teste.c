/* 
int square(int x) {
   return x * x;
}

o mesmo que

#define square(x) ((x)*(x))

*/

#include <stdio.h>

#define MAXIMO(x,y) ((x) > (y) ? (x) : (y))

int main(void) {
   printf("Maximo entre 20 e 10 : %d\n", MAXIMO(10, 20));  
   return 0;
}

/*
Maximo entre 20 e 10 : 20
*/

