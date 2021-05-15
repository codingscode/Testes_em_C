#include <stdio.h>


void mostrar();

int n = 5;  // variavel global

int main() {
    ++n;     
    mostrar();
    return 0;
}

void mostrar() {
    ++n;   
    printf("n = %d", n);
}

/* 
n = 7
*/
