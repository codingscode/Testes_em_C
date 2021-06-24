#include <stdio.h>


int main( int argc, char *argv[] )  {
   
   printf("Nome Programa: %s\n", argv[0]);
 
   if ( argc == 2 ) {
      printf("O argumento fornecido é : %s\n", argv[1]);
   }
   else if ( argc > 2 ) {
      printf("Muitos argumentos fornecidos.\n");
   }
   else {
      printf("Um argumento esperado.\n");
   }
}

/* 
Nome Programa: C:\Meus_Arquivos\Superior\Estacio\Estruturas de Dados em C\testes ling c\001_teste\052_teste.exe
Um argumento esperado.
*/