#include <stdio.h>


int soma(int *a, int *b) {
    *a = *a + *b;
    return *a;
}

int main() {
    int x = 5, y = 3;
    printf("antes -> x: %d\n", x);
    printf("antes -> y: %d\n", y);
    y = soma(&x, &y);

    printf("depois -> x: %d\n", x);
    printf("depois -> y: %d\n", y);

    printf("x + y : %d\n", x + y);

    return(0);
}

/* 
antes -> x: 5
antes -> y: 3
depois -> x: 8
depois -> y: 8
x + y : 16
*/