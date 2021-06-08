#include <stdio.h>


enum suit {
    paus = 0,
    ouros = 10,
    copas = 20,
    espadas = 3
} carta;

int main() {
    carta = paus;
	printf("Tamanho da variavel enum = %d bytes", sizeof(carta));	
	return 0;
}

/* 
Tamanho da variavel enum = 4 bytes
*/
