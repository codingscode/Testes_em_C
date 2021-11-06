#include <stdio.h>


int main() {
    int numero;

    printf("digite um numero:\n");
    scanf("%d", &numero);

    for (int i = 0; i < numero; i++) {
        printf("%d \n", i);
    }

    printf("fim");

    return 0;
}







