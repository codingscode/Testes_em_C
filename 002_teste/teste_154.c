#include <stdio.h>
#include <stdlib.h>


int main() {
   int numero;
   FILE *fponteiro;

   if ((fponteiro = fopen("./teste_154 arquivo.txt", "r")) == NULL){
       printf("Erro! Ao abrir arquivo");

       // Programa sai se o ponteiro do arquivo retorna NULL
       exit(1);
   }

   fscanf(fponteiro,"%d", &numero);

   printf("Valor de n: %d", numero);
   fclose(fponteiro); 
  
   return 0;
}

/* 
Valor de n: 248
*/
