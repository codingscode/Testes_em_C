#include <stdio.h>


void mostrar(int idade1, int idade2) {
    printf("%d\n", idade1);
    printf("%d\n", idade2);
}

int main() {
    int arrayIdade[] = {2, 8, 4, 12};

    // Passando segundo e terceiro elementos para mostrar()
    mostrar(arrayIdade[1], arrayIdade[2]); 
    return 0;
}

/* 
8
4
*/
