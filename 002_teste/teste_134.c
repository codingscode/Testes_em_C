#include <stdio.h>


int main() {
    char minha_string[] = "Programar eh divertido";
    int indice;

    printf("sizeof(minha_string): %d\n", sizeof(minha_string));

    for (indice = 0; minha_string[indice] != '\0'; ++indice);
    printf("Comprimento da string: %d", indice);
    	
    return 0;
}

/* 
sizeof(minha_string): 23
Comprimento da string: 22
*/
