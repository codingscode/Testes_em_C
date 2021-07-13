/* 
strlen()  ->  computes string's length
strcpy()  ->  copies a string to another
strcat()  ->  concatenates(joins) two strings
strcmp()  ->  compares two strings
strlwr()  ->  converts string to lowercase
strupr()  ->  converts string to uppercase

*/

#include<stdio.h>


int main() {
    char nome[30];
    printf("Digite o nome:\n");
    gets(nome);   // funcao para ler string recebida
    printf("Nome: ");
    puts(nome);  // funcao para mostrar string.
    return 0;
}

/* 
Digite o nome:
michael jackson
Nome: michael jackson

ou

Digite o nome:
Pedro de Alcantara Francisco Antonio Joao Carlos Xavier de Paula Miguel Rafael Joaquim Jose Gonzaga Pascoal Cipriano Serafim de Braganca e Bourbon
Nome: Pedro de Alcantara Francisco Antonio Joao Carlos Xavier de Paula Miguel Rafael Joaquim Jose Gonzaga Pascoal Cipriano Serafim de Braganca e Bourbon

*/
