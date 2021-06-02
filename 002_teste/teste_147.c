#include <stdio.h>


struct estudante {
    char nome[50];
    int num_lista;
    float marcas;
} s;

int main() {
    printf("Digite informacao:\n");
    printf("Digite nome:\n");
    fgets(s.nome, sizeof(s.nome), stdin);

    printf("Digite numero da lista:\n");
    scanf("%d", &s.num_lista);
    printf("Digite marcas:\n");
    scanf("%f", &s.marcas);

    printf("Mostrando Informacao:\n");
    printf("Nome: ");
    printf("%s", s.nome);
    printf("\nNumero da lista: %d\n", s.num_lista);
    printf("Marcas: %.1f\n", s.marcas);

    return 0;
}

/* 
Digite informacao:
Digite nome:
michael
Digite numero da lista:
356
Digite marcas:
4.5
Mostrando Informacao:
Nome: michael

Numero da lista: 356
Marcas: 4.5
*/
