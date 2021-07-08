#include <stdio.h>


int main() {
    int *ponteiro, c;
    c = 5;
    ponteiro = &c;
    *ponteiro = 1;
    
    printf("*ponteiro: %d\n", *ponteiro);
    printf("c: %d\n", c); 

    return (0);
}

/* 
*ponteiro: 1
c: 1
*/
