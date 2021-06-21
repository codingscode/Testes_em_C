#include <stdio.h>


main() {

   FILE *fp;
   char buff[255];

   fp = fopen("034_teste_arquivo.txt", "r");
   fscanf(fp, "%s", buff);
   printf("1: %s\n", buff);

   fgets(buff, 255, (FILE*)fp);
   printf("2: %s\n", buff);
   
   fgets(buff, 255, (FILE*)fp);
   printf("3: %s\n", buff);
   fclose(fp);

}

/* 
1: primeira
2:  linha.

3: segunda linha.
*/
