#include <stdio.h>


union Trabalho {
   float salario;
   int numTrabalhador;
} j;

int main() {
   j.salario = 12.3;
   printf("Salario = %.1f\n", j.salario);

   // quando j.numTrabalhador eh atribuido um valor,
   // j.salario nao mantera mais 12.3
   j.numTrabalhador = 100;

   printf("Numero de trabalhadores = %d\n", j.numTrabalhador);
   printf("---------------------\n");
   printf("Salario = %.1f\n", j.salario);
   printf("Numero de trabalhadores = %d\n", j.numTrabalhador);

   return 0;
}

/* 
Salario = 12.3
Numero de trabalhadores = 100
---------------------
Salario = 0.0
Numero de trabalhadores = 100
*/
