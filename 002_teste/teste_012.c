#include <stdio.h>


int main() {
    int a = 5, b = 5, c = 10, resultado;

    resultado = (a == b) && (c > b);
    printf("(%d == %d) && (%d > %d) eh %d \n", a, b, c, b, resultado);

    resultado = (a == b) && (c < b);
    printf("(%d == %d) && (%d < %d) eh %d \n", a, b, c, b, resultado);

    resultado = (a == b) || (c < b);
    printf("(%d == %d) || (%d < %d) eh %d \n", a, b, c, b, resultado);

    resultado = (a != b) || (c < b);
    printf("(%d != %d) || (%d < %d) eh %d \n", a, b, c, b, resultado);

    resultado = !(a != b);
    printf("!(%d != %d) eh %d \n", a, b, resultado);

    resultado = !(a == b);
    printf("!(%d == %d) eh %d \n", a, b, resultado);

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
