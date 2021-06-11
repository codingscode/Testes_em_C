#include <stdio.h>


int main() {  
    char caractere;
    printf("Digite um caractere:\n");
    scanf("%c", &caractere);  
    
    // %d mostra o valor inteiro de um caractere
    // %c mostra o caractere real
    printf("valor ASCII de %c = %d", caractere, caractere);
    
    return 0;
}

/* 
Digite um caractere:
w
valor ASCII de w = 119

ou

Digite um caractere:
8
valor ASCII de 8 = 56
*/
