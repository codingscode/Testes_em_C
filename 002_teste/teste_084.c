#include <stdio.h>


int mdc(int n1, int n2);

int main() {
    int numero1, numero2;
    printf("Digite dois inteiros positivos:\n");
    scanf("%d %d", &numero1, &numero2);
    printf("Maior divisor comum %d e %d eh %d.", numero1, numero2, mdc(numero1, numero2));
    return 0;
}

int mdc(int n1, int n2) {
    if (n2 != 0)
        return mdc(n2, n1 % n2);
    else
        return n1;
}

/* 
Digite dois inteiros positivos:
12
8
Maior divisor comum 12 e 8 eh 4.
*/
