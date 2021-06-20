#include <stdio.h>
#include <string.h>


typedef struct Livros {
   char titulo[50];
   char autor[50];
   char assunto[100];
   int livro_id;
} Livro;
 
int main() {

   Livro livro;
 
   strcpy(livro.titulo, "Programacao em C");
   strcpy(livro.autor, "Nuha Ali"); 
   strcpy(livro.assunto, "Programacao em C Tutorial");
   livro.livro_id = 6495407;
 
   printf("Livro titulo : %s\n", livro.titulo);
   printf("Livro autor : %s\n", livro.autor);
   printf("Livro assunto : %s\n", livro.assunto);
   printf("Livro livro_id : %d\n", livro.livro_id);

   return 0;
}

/* 
Livro titulo : Programacao em C
Livro autor : Nuha Ali
Livro assunto : Programacao em C Tutorial
Livro livro_id : 6495407
*/
