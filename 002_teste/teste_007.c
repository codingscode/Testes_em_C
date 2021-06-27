#include <stdio.h>


int main() {
    int a = 9, b = 4, c;
    double d;
    
    c = a + b;
    printf("a + b = %d \n", c);
    c = a - b;
    printf("a - b = %d \n", c);
    c = a * b;
    printf("a * b = %d \n", c);
    c = a / b;
    printf("a / b = %d \n", c);
    c = a % b;
    printf("O resto da divisao a / b = %d \n", c);
    d = 9.0 / 5.0;
    printf("9 / 5 = %f\n", d);

    return 0;
}

/*
a + b = 13
a - b = 5
a * b = 36
a / b = 2
O resto da divisao a / b = 1
9 / 5 = 1.800000
*/
