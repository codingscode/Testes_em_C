// Program to calculate the soma of numbers (10 numbers max)
// If the user enters a negative numero, it's not added to the result

#include <stdio.h>


int main() {
   int indice, quant_numeros;
   double numero, soma = 0.0;

   printf("Digite a quantidade de numeros:\n");
   scanf("%d", &quant_numeros);

   for (indice = 1; indice <= quant_numeros; ++indice) {
      printf("Digite n%d: ", indice);
      scanf("%lf", &numero);

      if (numero < 0.0) {
         continue;
      }

      soma += numero; // soma = soma + numero;
   }

   printf("Soma = %.2lf", soma);

   return 0;
}

/*
Digite a quantidade de numeros:
5
Digite n1: 7
Digite n2: 12
Digite n3: 18
Digite n4: 3
Digite n5: 9
Soma = 49.00

ou

Digite a quantidade de numeros:
9
Digite n1: 30
Digite n2: 10
Digite n3: 14
Digite n4: -4
Digite n5: -7
Digite n6: -5
Digite n7: 20
Digite n8: -10
Digite n9: 2
Soma = 76.00

*/
