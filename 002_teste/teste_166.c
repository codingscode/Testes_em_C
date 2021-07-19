/* 
#ifdef, #if, #defined, #else and #elseif

Macro	             Value
__DATE__	A string containing the current date
__FILE__	A string containing the file name
__LINE__	An integer representing the current line number
__STDC__	If follows ANSI standard C, then the value is a nonzero integer
__TIME__	A string containing the current date.

*/
#include <stdio.h>


int main() {
   printf("Horario atual: %s\n", __TIME__);   
   printf("Data atual: %s\n", __DATE__);   
   printf("Nome do arquivo: %s\n", __FILE__);   
   printf("Numero da linha atual: %d\n", __LINE__);   
   printf("ANSI: %d\n", __STDC__); 
}

/* 
Horario atual: 10:29:18
Data atual: Jul 19 2021
Nome do arquivo: C:\Meus_Arquivos\Superior\Estacio\Estruturas de Dados em C\testes ling c\002_teste\teste_166.c
Numero da linha atual: 19
ANSI: 1
*/
