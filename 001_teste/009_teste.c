#include <stdio.h>
 
/* funcao declaracao */
int max(int num1, int num2);
 
int main () {

   /* definicao de variavel local */
   int a = 100;
   int b = 200;
   int ret;
 
   /* chamando uma funcao para obter maximo valor */
   ret = max(a, b);
 
   printf("Maximo valor eh : %d\n", ret);
 
   return 0;
}
 
/* funcao retornando o maximo entre dois numeros */
int max(int num1, int num2) {
   /* declaracao de variavel local */
   int resultado;
 
   if (num1 > num2)
      resultado = num1;
   else
      resultado = num2;
 
   return resultado; 
}

/*
Maximo valor eh : 200
*/

