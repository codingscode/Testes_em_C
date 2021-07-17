#include <stdio.h>
#include <stdlib.h>


struct numArvore {
   int n1, n2, n3;
};

int main() {
   int n;
   struct numArvore numero;
   FILE *fponteiro;

   if ((fponteiro = fopen("./teste_155_arquivo.bin", "wb")) == NULL) {
       printf("Erro! abrindo arquivo");

       // Programa sai se o ponteiro do arquivo retorna NULL
       exit(1);
   }

   for (n = 1; n < 5; ++n) {
      numero.n1 = n;
      numero.n2 = 5*n;
      numero.n3 = 5*n + 1;
      fwrite(&numero, sizeof(struct numArvore), 1, fponteiro); 
   }
   fclose(fponteiro); 
  
   return 0;
}

/* 
cria arquivo teste_155_arquivo.bin
*/