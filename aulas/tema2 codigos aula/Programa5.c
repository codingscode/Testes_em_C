#include <stdio.h>


void troca(int *x, int *y) {
    int aux;
    if (x != NULL && y != NULL) { //se endere�os forem v�lidos
        aux = *x;                    //faz a troca
        *x = *y;
        *y = aux;
        printf("aux: %d\n", aux);
        printf("aux: %d\n", &aux);
        printf("x: %d\n", x);
        printf("y: %d\n", y);
    }
}

int main(){
    int v1=5, v2=10;
    printf("v1 = %d e v2 = %d\n", v1, v2);
    printf("endereco v1: %d - endereco v2: %d\n", &v1, &v2);
    troca(&v1, &v2);
    printf("endereco v1: %d - endereco v2: %d\n", &v1, &v2);
    printf("v1 = %d e v2 = %d\n", v1, v2);
}

/* 
v1 = 5 e v2 = 10
endereco v1: 6487580 - endereco v2: 6487576
aux: 5
aux: 6487516
x: 6487580
y: 6487576
endereco v1: 6487580 - endereco v2: 6487576
v1 = 10 e v2 = 5
*/
