#include <stdio.h>

int main() {
    int num;
    printf("Digite um inteiro:\n");
    scanf("%d", &num);
    
    (num % 2 == 0) ? printf("%d eh par.", num) : printf("%d eh impar.", num);
    return 0;
}

/* 
Digite um inteiro:
5
5 eh impar.

ou

Digite um inteiro:
8
8 eh par.

*/
