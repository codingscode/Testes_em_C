#include<stdio.h>


int main() {
      double primeiro, segundo, temp;
      printf("Digite primeiro numero:\n");
      scanf("%lf", &primeiro);
      printf("Digite segundo numero:\n");
      scanf("%lf", &segundo);

      // valor de primeiro eh atribuido a temp
      temp = primeiro;

      // valor de segundo eh atribuido a primeiro
      primeiro = segundo;

      // valor de temp (valor inicial de primeiro) eh atribuido a segundo
      segundo = temp;

     // %.2lf mostra numero acima de 2 pontos decimal
      printf("\nDepois trocando, primeiroNumero = %.2lf\n", primeiro);
      printf("Depois trocando, segundoNumero = %.2lf", segundo);
      return 0;
}

/* 
Digite primeiro numero:
4
Digite segundo numero:
5

Depois trocando, primeiroNumero = 5.00
Depois trocando, segundoNumero = 4.00
*/
