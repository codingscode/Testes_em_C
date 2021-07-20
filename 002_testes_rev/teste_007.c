#include<stdio.h>


int main() {
    int tipoInt;
    float tipoFloat;
    double tipoDouble;
    char tipoChar;
    char tipoCharString[15];

    // sizeof avalia o tamanho de uma variavel
    printf("tamanho de int: %zu bytes\n", sizeof(tipoInt));
    printf("tamanho de float: %zu bytes\n", sizeof(tipoFloat));
    printf("tamanho de double: %zu bytes\n", sizeof(tipoDouble));
    printf("tamanho de char: %zu byte\n", sizeof(tipoChar));
    printf("tamanho de charString: %zu bytes\n", sizeof(tipoCharString));
    
    return 0;
}

/* 
tamanho de int: 4 bytes
tamanho de float: 4 bytes
tamanho de double: 8 bytes
tamanho de char: 1 byte
tamanho de charString: 15 bytes
*/
