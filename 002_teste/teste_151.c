#include <stdio.h>


struct estudante {
    char primeiroNome[50];
    int lista;
    float marcas;
} e[10];

int main() {
    int i;
    printf("Digite informacoes sobre estudantes:\n");

    // armazenando informacao
    for (i = 0; i < 3; ++i) {
        e[i].lista = i + 1;
        printf("\nPara numero lista%d,\n", e[i].lista);
        printf("Digite primeiro nome:\n");
        scanf("%s", e[i].primeiroNome);
        printf("Digite marcas:\n");
        scanf("%f", &e[i].marcas);
    }
    printf("Mostrando informacao:\n\n");

    // Mostrando informacao
    for (i = 0; i < 3; ++i) {
        printf("\nNumero de lista: %d\n", i + 1);
        printf("Primeiro nome: ");
        puts(e[i].primeiroNome);
        printf("Marcas: %.1f", e[i].marcas);
        printf("\n");
    }
    return 0;
}

/* 
Digite informacoes sobre estudantes:

Para numero lista1,
Digite primeiro nome:
vicente
Digite marcas:
4

Para numero lista2,
Digite primeiro nome:
simon
Digite marcas:
2

Para numero lista3,
Digite primeiro nome:
thompson
Digite marcas:
5
Mostrando informacao:


Numero de lista: 1
Primeiro nome: vicente
Marcas: 4.0

Numero de lista: 2
Primeiro nome: simon
Marcas: 2.0

Numero de lista: 3
Primeiro nome: thompson
Marcas: 5.0
*/
