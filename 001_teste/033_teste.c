/* 
"rb", "wb", "ab", "rb+", "r+b", "wb+", "w+b", "ab+", "a+b"
*/
#include <stdio.h>


main() {
   FILE *fp;

   fp = fopen("033_teste_arquivo.txt", "w+");
   fprintf(fp, "Isto eh um teste para fprintf...\n");
   fputs("Isto eh um teste para fputs...\n", fp);
   fclose(fp);
}

/* 
o arquivo 033_teste_arquivo.txt fica :

Isto eh um teste para fprintf...
Isto eh um teste para fputs...

*/