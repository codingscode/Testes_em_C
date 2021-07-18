#include <stdio.h>
#include <stdlib.h>


struct tres_numeros {
   int n1, n2, n3;
};

int main() {
   int numero;
   struct tres_numeros num;
   FILE *ponteiro_arquivo;

   if ((ponteiro_arquivo = fopen("./teste_157_arquivo.bin", "rb")) == NULL) {
       printf("Erro! abrindo arquivo");

       // programa sai se o ponteiro arquivo retorna NULL
       exit(1);
   }
   
   // move o cursor para o fim do arquivo
   fseek(ponteiro_arquivo, -sizeof(struct tres_numeros), SEEK_END);

   for (numero = 1; numero < 5; ++numero) {
      fread(&num, sizeof(struct tres_numeros), 1, ponteiro_arquivo); 
      printf("n1: %d\tn2: %d\tn3: %d\n", num.n1, num.n2, num.n3);
      fseek(ponteiro_arquivo, -2*sizeof(struct tres_numeros), SEEK_CUR);
   }
   fclose(ponteiro_arquivo); 
  
   return 0;
}

/* 
n1: 873073971   n2: 221579789   n3: 13834
n1: 873073971   n2: 221579789   n3: 13834
n1: 873073971   n2: 221579789   n3: 13834
n1: 873073971   n2: 221579789   n3: 13834
*/