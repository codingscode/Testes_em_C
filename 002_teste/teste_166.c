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
   printf("Horario atual: %s",__TIME__);   
}

/* 
Horario atual: 09:51:33
*/
