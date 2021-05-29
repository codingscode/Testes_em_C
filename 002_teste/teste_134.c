#include <stdio.h>


int main() {
    char minha_string[] = "Programar eh divertido";
    int indice;

    for (indice = 0; minha_string[indice] != '\0'; ++indice);
       	printf("Comprimento da string: %d", indice);
    	
    return 0;
}

/* 
Comprimento da string: 22
*/
