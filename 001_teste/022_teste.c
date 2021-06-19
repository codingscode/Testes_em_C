#include <stdio.h>
#include <string.h>
 

struct Livros {
   char titulo[50];
   char autor[50];
   char assunto[100];
   int livro_id;
};

/* declarando funcao */
void imprimirLivro( struct Livros *livro );

int main() {

   struct Livros Livro1;        /* declarar Livro1 do tipo Livro */
   struct Livros Livro2;        /* declarar Livro2 do tipo Livro */
 
   /* livro 1 especificacao */
   strcpy( Livro1.titulo, "Programacao em Python");
   strcpy( Livro1.autor, "Bob Allan"); 
   strcpy( Livro1.assunto, "Programacao em Python Tutorial");
   Livro1.livro_id = 6495407;

   /* livro 2 especificacao */
   strcpy( Livro2.titulo, "Culinaria economica");
   strcpy( Livro2.autor, "Frederico Gomes");
   strcpy( Livro2.assunto, "Culinaria economica Tutorial");
   Livro2.livro_id = 6495700;
 
   /* imprimir Livro1 info passando endereço de Livro1 */
   imprimirLivro( &Livro1 );

   /* imprimir Livro2 info passando endereço de Livro2 */
   imprimirLivro( &Livro2 );

   return 0;
}

void imprimirLivro( struct Livros *livro ) {

   printf("Livro titulo : %s\n", livro->titulo);
   printf("Livro autor : %s\n", livro->autor);
   printf("Livro assunto : %s\n", livro->assunto);
   printf("Livro livro_id : %d\n", livro->livro_id);
}

/* 
Livro titulo : Programacao em Python
Livro autor : Bob Allan
Livro assunto : Programacao em Python Tutorial
Livro livro_id : 6495407
Livro titulo : Culinaria economica
Livro autor : Frederico Gomes
Livro assunto : Culinaria economica Tutorial
Livro livro_id : 6495700
*/
