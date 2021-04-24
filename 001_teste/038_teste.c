#include <stdio.h>

#if !defined (MENSAGEM)
   #define MENSAGEM "Como vai ?"
#endif

int main(void) {
   printf("Aqui esta a mensagem: %s\n", MENSAGEM);  
   return 0;
}

/* 
Aqui esta a mensagem: Como vai ?
*/
