#include <stdio.h>
#include <string.h>
 

struct Livros {
   char titulo[50];
   char autor[50];
   char assunto[100];
   int livro_id;
};
 
int main() {

   struct Livros Livro1;        /* declarar Livro1 do tipo Livro */
   struct Livros Livro2;        /* declarar Livro2 do tipo Livro */
 
   /* livro 1 especificação */
   strcpy( Livro1.titulo, "C Programming");
   strcpy( Livro1.autor, "Nuha Ali"); 
   strcpy( Livro1.assunto, "C Programming Tutorial");
   Livro1.livro_id = 6495407;

   /* livro 2 especificação */
   strcpy( Livro2.titulo, "Telecom Billing");
   strcpy( Livro2.autor, "Zara Ali");
   strcpy( Livro2.assunto, "Telecom Billing Tutorial");
   Livro2.livro_id = 6495700;
 
   /* imprimir Livro1 info */
   printf("Livro 1 titulo : %s\n", Livro1.titulo);
   printf("Livro 1 autor : %s\n", Livro1.autor);
   printf("Livro 1 assunto : %s\n", Livro1.assunto);
   printf("Livro 1 livro_id : %d\n", Livro1.livro_id);

   /* imprimir Livro2 info */
   printf("Livro 2 titulo : %s\n", Livro2.titulo);
   printf("Livro 2 autor : %s\n", Livro2.autor);
   printf("Livro 2 assunto : %s\n", Livro2.assunto);
   printf("Livro 2 livro_id : %d\n", Livro2.livro_id);
   
   return 0;
}

/* 
Livro 1 titulo : C Programming
Livro 1 autor : Nuha Ali
Livro 1 assunto : C Programming Tutorial
Livro 1 livro_id : 6495407
Livro 2 titulo : Telecom Billing
Livro 2 autor : Zara Ali
Livro 2 assunto : Telecom Billing Tutorial
Livro 2 livro_id : 6495700
*/
