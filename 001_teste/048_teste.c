#include <stdio.h>
#include <stdarg.h>

 
double media(int quantidade,...) {

   va_list lista_variaveis;
   double soma = 0.0;
   int i;

   /* inicializar lista_variaveis para quantidade de argumentos */
   va_start(lista_variaveis, quantidade);

   /* acessar todos os argumentos atribuidos a lista_variaveis */
   for (i = 0; i < quantidade; i++) {
      soma += va_arg(lista_variaveis, int);
   }
	
   /* limpar memoria reservada para lista_variaveis */
   va_end(lista_variaveis);

   return soma/quantidade;
}

int main() {
   printf("Media de 2, 3, 4, 5 = %f\n", media(4, 2, 3, 4, 5));
   printf("Media de 5, 10, 15 = %f\n", media(3, 5, 10, 15));
}

/* 
Media de 2, 3, 4, 5 = 3.500000
Media de 5, 10, 15 = 10.000000
*/
