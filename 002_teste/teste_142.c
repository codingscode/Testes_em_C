#include <stdio.h>


struct aluno {
   char nome[50];
   int idade;
};

// funcao prototype
void mostrar(struct aluno s);

int main() {
   struct aluno s1;

   printf("Digite nome:\n");

   // ler entrada string até \n ser digitado
   // \n eh descartado
   scanf("%[^\n]%*c", s1.nome);

   printf("Digite idade:\n");
   scanf("%d", &s1.idade);

   mostrar(s1); // passando struct como um argumento
   return 0;
}

void mostrar(struct aluno s) {
   printf("\nMostrando informacao\n");
   printf("Nome: %s", s.nome);
   printf("\nIdade: %d", s.idade);
}

/* 
Digite nome:
michael jackson
Digite idade:
49

Mostrando informacao
Nome: michael jackson
Idade: 49
*/
