#include <stdio.h>


int main() {
    int *ponteiro, c;
    c = 5;
    ponteiro = &c;
    c = 1;
    
    printf("c: %d\n", c);    
    printf("*ponteiro: %d\n", *ponteiro); 

    return (0);
}

/* 
c: 1
*ponteiro: 1
*/
