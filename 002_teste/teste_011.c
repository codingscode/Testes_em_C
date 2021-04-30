#include <stdio.h>


int main() {
    int a = 5, b = 5, c = 10;

    printf("%d == %d eh %d \n", a, b, a == b);
    printf("%d == %d eh %d \n", a, c, a == c);
    printf("%d > %d eh %d \n", a, b, a > b);
    printf("%d > %d eh %d \n", a, c, a > c);
    printf("%d < %d eh %d \n", a, b, a < b);
    printf("%d < %d eh %d \n", a, c, a < c);
    printf("%d != %d eh %d \n", a, b, a != b);
    printf("%d != %d eh %d \n", a, c, a != c);
    printf("%d >= %d eh %d \n", a, b, a >= b);
    printf("%d >= %d eh %d \n", a, c, a >= c);
    printf("%d <= %d eh %d \n", a, b, a <= b);
    printf("%d <= %d eh %d \n", a, c, a <= c);

    return 0;
}

/*
5 == 5 eh 1
5 == 10 eh 0
5 > 5 eh 0
5 > 10 eh 0
5 < 5 eh 0
5 < 10 eh 1
5 != 5 eh 0
5 != 10 eh 1
5 >= 5 eh 1
5 >= 10 eh 0
5 <= 5 eh 1
5 <= 10 eh 1
*/
