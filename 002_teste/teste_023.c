#include <stdio.h>

int main() {
   int indice, quant_numeros;
   double numero, soma = 0.0;
   
   printf("Digite a quantidade de numeros:\n");
   scanf("%d", &quant_numeros);

   for (indice = 1; indice <= quant_numeros; ++indice) {
      printf("Digite n%d: ", indice);
      scanf("%lf", &numero);

      // se negativo, encerra o loop
      if (numero < 0.0) {
         break;
      }

      soma += numero; // soma = soma + numero;
   }

   printf("Soma = %.2lf", soma);

   return 0;
}

/* 
Digite a quantidade de numeros:
3
Digite n1: 10
Digite n2: 3
Digite n3: 5
Soma = 18.00

ou 

Digite a quantidade de numeros:
5
Digite n1: 20
Digite n2: 3
Digite n3: 8
Digite n4: -5
Soma = 31.00

*/
