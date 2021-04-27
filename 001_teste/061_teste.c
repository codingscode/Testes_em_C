#include <stdio.h>


int soma(int a, int b) {
    int s;
    s = a + b;
    return s;
}

int main() {
    int x = 5, y = 10;
    int z ;
    z = soma(x, y);
    printf("%d", z);
    
    return(0);
}

/*
15
*/
