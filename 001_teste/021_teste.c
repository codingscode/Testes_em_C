#include <stdio.h>
#include <string.h>
 
struct Livros {
   char titulo[50];
   char autor[50];
   char assunto[100];
   int livro_id;
};

/* declaração de função */
void imprimirLivro( struct Livros livro );

int main() {

   struct Livros Livro1;        /* declarar Livro1 do tipo Livro */
   struct Livros Livro2;        /* declarar Livro2 do tipo Livro */
 
   /* livro 1 especificação */
   strcpy( Livro1.titulo, "Programação em C");
   strcpy( Livro1.autor, "Osho"); 
   strcpy( Livro1.assunto, "Programação em C Tutorial");
   Livro1.livro_id = 6495407;

   /* livro 2 especificação */
   strcpy( Livro2.titulo, "Telecom Billing");
   strcpy( Livro2.autor, "Zara Ali");
   strcpy( Livro2.assunto, "Telecom Billing Tutorial");
   Livro2.livro_id = 6495700;
 
   /* imprimir Livro1 info */
   imprimirLivro( Livro1 );

   /* imprimir Livro2 info */
   imprimirLivro( Livro2 );

   return 0;
}

void imprimirLivro( struct Livros livro ) {

   printf( "Livro titulo : %s\n", livro.titulo);
   printf( "Livro autor : %s\n", livro.autor);
   printf( "Livro assunto : %s\n", livro.assunto);
   printf( "Livro livro_id : %d\n", livro.livro_id);
}

/* 
Livro titulo : Programação em C
Livro autor : Osho
Livro assunto : Programação em C Tutorial
Livro livro_id : 6495407
Livro titulo : Telecom Billing
Livro autor : Zara Ali
Livro assunto : Telecom Billing Tutorial
Livro livro_id : 6495700
 */
