#include <stdio.h>


struct estudante {
    char nome[50];
    int idade;
};

// function prototype
struct estudante acessarInformacao();

int main() {
    struct estudante s;

    s = acessarInformacao();

    printf("\nMostrando informacao:\n");
    printf("Nome: %s\n", s.nome);
    printf("Idade: %d", s.idade);
    
    return 0;
}

struct estudante acessarInformacao() {
    struct estudante s1;

    printf("Digitar nome:\n");
    scanf ("%[^\n]%*c", s1.nome);

    printf("Digitar idade:\n");
    scanf("%d", &s1.idade);
    
    return s1;
}	

/* 
Digitar nome:
michael jackson
Digitar idade:
80

Mostrando informacao:
Nome: michael jackson
Idade: 80
*/
