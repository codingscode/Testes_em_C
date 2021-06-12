#include <stdio.h>


int main() {
    int a;
    long b;   // equivalente a long int b;
    long long c;  // equivalente a long long int c;
    double e;
    long double f;

    printf("tamanho de int = %zu bytes \n", sizeof(a));
    printf("tamanho de long int = %zu bytes\n", sizeof(b));
    printf("tamanho de long long int = %zu bytes\n", sizeof(c));
    printf("tamanho de double = %zu bytes\n", sizeof(e));
    printf("tamanho de long double = %zu bytes\n", sizeof(f));
    
    return 0;
}

/*
tamanho de int = 4 bytes
tamanho de long int = 4 bytes
tamanho de long long int = 8 bytes
tamanho de double = 8 bytes
tamanho de long double = 16 bytes
*/
