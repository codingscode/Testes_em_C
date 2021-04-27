#include <stdio.h>
    int main(void) {
    int x, *y, z;
    x = 5;
    y = &x;
    z = 10;
    scanf("%d", y);
    printf("%d %d", x, z);
}

/* 
15
15 10
*/
