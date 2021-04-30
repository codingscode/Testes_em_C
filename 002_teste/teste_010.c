#include <stdio.h>


int main() {
    int a = 7;
    int c = 20;

    printf("c = %d\n", c);
    c += a;     
    printf("c = %d\n", c);
    c -= a;     
    printf("c = %d\n", c);
    c *= a;     
    printf("c = %d\n", c);
    c /= a;     
    printf("c = %d\n", c);
    c %= a;     
    printf("c = %d\n", c);

    return 0;
}

/*
c = 20
c = 27
c = 20
c = 140
c = 20
c = 6
*/
