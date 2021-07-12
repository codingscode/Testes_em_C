#include <stdio.h>


void mostrarString(char str[]);

int main() {
    char minha_string[50];
    printf("Digitar string: ");
    fgets(minha_string, sizeof(minha_string), stdin);             
    mostrarString(minha_string);     // Passando string a uma funcao    
    
    return 0;
}

void mostrarString(char str[]) {
    printf("String saida: ");
    puts(str);
}

/* 
Digitar string: michael jackson
String saida: michael jackson

ou

Digitar string: o menino ouvio: o rato roeu a roupa do rei de roma.
String saida: o menino ouvio: o rato roeu a roupa do rei de rom
*/
