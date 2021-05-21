#include <stdio.h>


int main() {
    int *ponteiro, c, d;
    c = 5;
    d = -15;

    ponteiro = &c; 
    printf("*ponteiro: %d\n", *ponteiro);
    ponteiro = &d; 
    printf("*ponteiro: %d\n", *ponteiro);

    return (0);
}

/* 
*ponteiro: 5
*ponteiro: -15
*/
