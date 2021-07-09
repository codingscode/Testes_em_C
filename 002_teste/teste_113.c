#include <stdio.h>


void adicionarUm(int *ponteiro) {
    (*ponteiro)++; // adicionando 1 para *ponteiro
}

int main() {
    int *p, indice = 10;
    p = &indice;
    adicionarUm(p);

    printf("*p : %d", *p); // 11
    return 0;
}

/* 
*p : 11
*/
