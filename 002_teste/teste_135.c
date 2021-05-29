#include <stdio.h>


int main() {
  char minha_string1[100] = "Caminhada ", minha_string2[] = "eh saudavel";
  int comprimento, j;

  // armazenar comprimento de minha_string1 na variavel comprimento
  comprimento = 0;
  while (minha_string1[comprimento] != '\0') {
    ++comprimento;
  }

  // concatenar minha_string2 em minha_string1
  for (j = 0; minha_string2[j] != '\0'; ++j, ++comprimento) {
    minha_string1[comprimento] = minha_string2[j];
  }

  // terminando a string minha_string1
  minha_string1[comprimento] = '\0';

  printf("Depois de concatenacao: ");
  puts(minha_string1);

  return 0;
}

/* 
Depois de concatenacao: Caminhada eh saudavel
*/
