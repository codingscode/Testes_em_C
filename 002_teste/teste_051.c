#include <stdio.h>


int main() {
  int numero, indice, flag = 0;
  printf("Digite um inteiro positivo:\n");
  scanf("%d", &numero);

  for (indice = 2; indice <= numero/2; ++indice) {
    // condicao para nao primo
    if (numero % indice == 0) {
      flag = 1;
      break;
    }
  }

  if (numero == 1) {
    printf("1 eh nem primo nem composto.");
  } 
  else {
    if (flag == 0)
      printf("%d eh um numero primo.", numero);
    else
      printf("%d nao eh um numero primo.", numero);
  }

  return 0;
}

/* 
Digite um inteiro positivo:
4
4 nao eh um numero primo.

ou

Digite um inteiro positivo:
5
5 eh um numero primo.

ou

Digite um inteiro positivo:
1
1 eh nem primo nem composto.
*/