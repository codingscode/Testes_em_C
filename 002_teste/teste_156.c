#include <stdio.h>
#include <stdlib.h>


struct tresNumeros {
   int n1, n2, n3;
};

int main() {
   int numero;
   struct tresNumeros num;
   FILE *ponteiro_arquivo;

   if ((ponteiro_arquivo = fopen("./teste_156_arquivo.bin","rb")) == NULL){
       printf("Erro! abrindo arquivo");

       // Programa sai se o apontador de arquivo retorna NULL
       exit(1);
   }

   for (numero = 1; numero < 5; ++numero) {
      fread(&num, sizeof(struct tresNumeros), 1, ponteiro_arquivo); 
      printf("n1: %d\tn2: %d\tn3: %d", num.n1, num.n2, num.n3);
   }
   fclose(ponteiro_arquivo); 
  
   return 0;
}

/* 
n1: 941629491   n2: 808591392   n3: 97n1: 941629491     n2: 808591392   n3: 97n1: 941629491     n2: 808591392   n3: 97n1: 941629491     n2: 808591392   n3: 97
*/



