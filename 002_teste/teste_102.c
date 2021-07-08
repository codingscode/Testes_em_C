#include <stdio.h>


int main() {
    int *ponteiro, c;
    c = 5;
    ponteiro = &c;
    
    printf("*ponteiro: %d\n", *ponteiro);
    printf("ponteiro: %d\n", ponteiro);

    return (0);
}

/* 
*ponteiro: 5
ponteiro: 6487572
*/
