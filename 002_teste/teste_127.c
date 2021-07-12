#include <stdio.h>


int main() {
    char nome[30];
    printf("Digite nome:\n");
    fgets(nome, sizeof(nome), stdin);  // ler string
    printf("Nome: ");
    puts(nome);  // mostra string
    return 0;
}

/* 
Digite nome:
michael jackson
Nome: michael jackson
*/
