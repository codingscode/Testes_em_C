/* 
r  ->	Open for reading.  ->	If the file does not exist, fopen() returns NULL.
rb  ->	Open for reading in binary mode.  ->	If the file does not exist, fopen() returns NULL.
w  ->	Open for writing.  ->	If the file exists, its contents are overwritten. 
                  				If the file does not exist, it will be created.
wb ->	Open for writing in binary mode. ->	If the file exists, its contents are overwritten.
                              				If the file does not exist, it will be created.
a ->	Open for append. Data is added to the end of the file.  ->	If the file does not exist, it will be created.
ab  ->	Open for append in binary mode. Data is added to the end of the file. ->	If the file does not exist, it will be created.
r+  ->	Open for both reading and writing. ->	If the file does not exist, fopen() returns NULL.
rb+ ->	Open for both reading and writing in binary mode. ->	If the file does not exist, fopen() returns NULL.
w+  ->	Open for both reading and writing. ->	If the file exists, its contents are overwritten.
                                                If the file does not exist, it will be created.
wb+ ->	Open for both reading and writing in binary mode.	-> If the file exists, its contents are overwritten.
                                                               If the file does not exist, it will be created.
a+	 ->   Open for both reading and appending.  ->	If the file does not exist, it will be created.
ab+ ->	Open for both reading and appending in binary mode. ->	If the file does not exist, it will be created.
*/
#include <stdio.h>
#include <stdlib.h>


int main() {
   int numero;
   FILE *fponteiro;

   // use locacao apropriada se vc esta usando MacOS ou Linux
   fponteiro = fopen("./teste_153_arquivo.txt", "w");

   if (fponteiro == NULL) {
      printf("Erro!");   
      exit(1);             
   }

   printf("Digite um numero:\n");
   scanf("%d", &numero);

   fprintf(fponteiro,"o que tah sendo escrito: %d", numero);
   fclose(fponteiro);

   return 0;
}

/* 
Digite um numero:
18
*/
/*  o arquivo teste_153_arquivo.txt eh escrito  */