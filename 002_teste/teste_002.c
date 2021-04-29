#include <stdio.h>      


int main() {
  short a;
  long b;
  long long c;
  long double d;

  printf("tamanho de short = %d bytes\n", sizeof(a));
  printf("tamanho de long = %d bytes\n", sizeof(b));
  printf("tamanho de long long = %d bytes\n", sizeof(c));
  printf("tamanho de long double= %d bytes\n", sizeof(d));
  return 0;
}

/*
tamanho de short = 2 bytes
tamanho de long = 4 bytes
tamanho de long long = 8 bytes
tamanho de long double= 16 bytes
*/
