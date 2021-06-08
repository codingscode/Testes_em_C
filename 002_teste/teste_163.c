#include <stdio.h>


enum estilo {
	NEGRITO = 1,
	ITALICO = 2,
	SUBLINHADO = 4
};

int main() {
	int meu_estilo = NEGRITO | SUBLINHADO; 

        //    00000001
        //  | 00000100
        //  ___________
        //    00000101

	printf("%d", meu_estilo);

	return 0;
}

/* 
5
*/
