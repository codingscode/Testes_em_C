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
    gets(nome);     // funcao para ler string recebida
    printf("Nome: ");
    puts(nome);    // funcao para mostrar string.
    return 0;
}

/* 
Digite o nome:
michael jackson
Nome: michael jackson
*/
