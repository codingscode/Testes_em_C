#include <stdio.h>


int main() {
    int dividendo, divisor, quociente, resto;

    printf("Digite dividendo:\n");
    scanf("%d", &dividendo);
    printf("Digite divisor:\n");
    scanf("%d", &divisor);

    // computa quociente
    quociente = dividendo / divisor;

    // computa resto
    resto = dividendo % divisor;

    printf("Quociente = %d\n", quociente);
    printf("Resto = %d", resto);
    return 0;
}

/* 
Digite dividendo:
20
Digite divisor:
7
Quociente = 2
Resto = 6
*/