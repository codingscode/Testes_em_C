/*
#define -> Substitutes a preprocessor macro.

#include -> Inserts a particular header from another file.

#undef -> Undefines a preprocessor macro.

#ifdef -> Returns true if this macro is defined.

#ifndef -> Returns true if this macro is not defined.

#if -> Tests if a compile time condition is true.

#else -> The alternative for #if.

#elif  #else and #if in one statement.

#endif -> Ends preprocessor conditional.

#error -> Prints error message on stderr.

#pragma -> Issues special commands to the compiler, using a standardized method.

*/

#include <stdio.h>

int main() {

   printf("Arquivo :%s\n", __FILE__ );
   printf("Data :%s\n", __DATE__ );
   printf("Horario :%s\n", __TIME__ );
   printf("Linha do codigo :%d\n", __LINE__ );
   printf("ANSI :%d\n", __STDC__ );

}

/*
Arquivo :C:\Meus_Arquivos\Superior\Estacio\Estruturas de Dados em C\testes ling c\001_teste\035_teste.c
Data :Apr 24 2021
Horario :09:24:23
Linha do codigo :33
ANSI :1
*/
