#include <stdio.h>


float calcularSoma(float idade[]);

int main() {
    float resultado, idade[] = {23.4, 55, 22.6, 3, 40.5, 18};

    // idade array eh passado para calcularSoma()
    resultado = calcularSoma(idade); 
    printf("Resultado = %.2f", resultado);
    return 0;
}

float calcularSoma(float idade[]) {
  float soma = 0.0;

  for (int i = 0; i < 6; ++i) {
	 soma += idade[i];
  }

  return soma;
}

/* 
Resultado = 162.50
*/