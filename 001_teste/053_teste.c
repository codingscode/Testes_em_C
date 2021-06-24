#include <stdio.h>


int main(void) {
    int x, *y, z;
    x = 5;
    y = &x;
    z = 10;

    scanf("%d", y);
    printf("x: %d, z: %d", x, z);
}

/* 
12
x: 12, z: 10
*/