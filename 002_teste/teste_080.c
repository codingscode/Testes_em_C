#include <math.h>
#include <stdio.h>


int checarNumeroPrimo(int num);

int checarNumeroArmstrong(int num);

int main() {
   int numero, presenca;
   printf("Digite um inteiro positivo:\n");
   scanf("%d", &numero);

   // checar numero primo
   presenca = checarNumeroPrimo(numero);
   if (presenca == 0)
      printf("%d eh um numero primo.\n", numero);
   else
      printf("%d nao eh um numero primo.\n", numero);

   // checar numero de  Armstrong
   presenca = checarNumeroArmstrong(numero);
   if (presenca == 1)
      printf("%d eh um numero de Armstrong.", numero);
   else
      printf("%d nao eh um numero de Armstrong.", numero);
   return 0;
}

// funcao para checar numero primo
int checarNumeroPrimo(int num) {
   int indice, presenca = 0, raizQuadrada;

   // computando a raiz quadrada
   raizQuadrada = sqrt(num);
   for (indice = 2; indice <= raizQuadrada; ++indice) {
      // condicao para nao numero primo
      if (num % indice == 0) {
         presenca = 1;
         break;
      }
   }
   return presenca;
}

// funcao para checar numero de Armstrong
int checarNumeroArmstrong(int num) {
   int numero_original, resto, n = 0, presenca;
   double resultado = 0.0;

   // armazenar o numero de digitos de num em n
   for (numero_original = num; numero_original != 0; ++n) {
      numero_original /= 10;
   }

   for (numero_original = num; numero_original != 0; numero_original /= 10) {
      resto = numero_original % 10;

      // armazenar a soma da potencia individual de digitos em resultado
      resultado += pow(resto, n);
   }

   // condicao para numero de Armstrong
   if (round(resultado) == num)
      presenca = 1;
   else
      presenca = 0;
   return presenca;
}

/* 
Digite um inteiro positivo:
371
371 nao eh um numero primo.
371 eh um numero de Armstrong.

ou

Digite um inteiro positivo:
153
153 nao eh um numero primo.
153 eh um numero de Armstrong.

*/
