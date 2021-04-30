#include <stdio.h>


int main() {
    int a = 5, b = 5, c = 10, result;

    result = (a == b) && (c > b);
    printf("(%d == %d) && (%d > %d) eh %d \n", a, b, c, b, result);

    result = (a == b) && (c < b);
    printf("(%d == %d) && (%d < %d) eh %d \n", a, b, c, b, result);

    result = (a == b) || (c < b);
    printf("(%d == %d) || (%d < %d) eh %d \n", a, b, c, b, result);

    result = (a != b) || (c < b);
    printf("(%d != %d) || (%d < %d) eh %d \n", a, b, c, b, result);

    result = !(a != b);
    printf("!(%d != %d) eh %d \n", a, b, result);

    result = !(a == b);
    printf("!(%d == %d) eh %d \n", a, b, result);

    return 0;
}

/*
(5 == 5) && (10 > 5) eh 1
(5 == 5) && (10 < 5) eh 0
(5 == 5) || (10 < 5) eh 1
(5 != 5) || (10 < 5) eh 0
!(5 != 5) eh 1
!(5 == 5) eh 0
*/
