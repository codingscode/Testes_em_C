/* 
"rb", "wb", "ab", "rb+", "r+b", "wb+", "w+b", "ab+", "a+b"
*/
#include <stdio.h>

main() {
   FILE *fp;

   fp = fopen("033_teste_arquivo.txt", "w+");
   fprintf(fp, "Isto é um teste para fprintf...\n");
   fputs("Isto Ã© um teste para fputs...\n", fp);
   fclose(fp);
}

/* 

*/
