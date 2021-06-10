#include <stdio.h>


int main() {    

    int numero1, numero2, soma;
    
    printf("Digite dois inteiros um abaixo do outro:\n");
    scanf("%d %d", &numero1, &numero2);

    soma = numero1 + numero2;      
    
    printf("%d + %d = %d", numero1, numero2, soma);
    return 0;
}

/* 
Digite dois inteiros um abaixo do outro:
8
3
8 + 3 = 11
*/
