//Programa 6
#include <stdio.h>


void troca(int *x, int *y) {
    int aux;

    if (x != NULL && y != NULL) { //se enderecos forem validos
        aux = *x;                    //faz a troca
        *x = *y;
        *y = aux;
    }
}

int main(){
    int v1 = 5, v2 = 10;

    printf("v1 = %d e v2 = %d\n", v1, v2);
    troca(&v1, &v2);
    printf("v1 = %d e v2 = %d\n", v1, v2);
}

/*
v1 = 5 e v2 = 10
v1 = 10 e v2 = 5
*/