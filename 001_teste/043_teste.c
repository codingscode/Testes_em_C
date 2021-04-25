#include <stdio.h>
#include <errno.h>
#include <string.h>

extern int errno ;

int main () {

   FILE * pf;
   int errnum;
   pf = fopen ("naoexistente.txt", "rb");
	
   if (pf == NULL) {
   
      errnum = errno;
      fprintf(stderr, "Valor de errno: %d\n", errno);
      perror("Erro impresso por perror");
      fprintf(stderr, "Erro abrindo arquivo: %s\n", strerror( errnum ));
   }
   else {
      fclose (pf);
   }
   
   return 0;
}

/* 
Valor de errno: 2
Erro impresso por perror: No such file or directory
Erro abrindo arquivo: No such file or directory
*/
