#include <stdio.h>


int main() {
    int a;
    float b;
    double c;
    char d;

    printf("Tamanho de int = %lu bytes\n",sizeof(a));
    printf("Tamanho de float = %lu bytes\n",sizeof(b));
    printf("Tamanho de double = %lu bytes\n",sizeof(c));
    printf("Tamanho de char = %lu byte\n",sizeof(d));

    return 0;
}

/*
Tamanho de int = 4 bytes
Tamanho de float = 4 bytes
Tamanho de double = 8 bytes
Tamanho de char = 1 byte
*/

