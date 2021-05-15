#include <stdio.h>


void mostrar();

int main() {
    mostrar();
    mostrar();
    mostrar();
    mostrar();
}

void mostrar() {
    static int c = 1;
    c += 5;
    printf("%d ",c);
}

/* 
6 11 16 21
*/
