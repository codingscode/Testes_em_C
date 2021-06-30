#include <stdio.h>


int main() {
    char caractere;
    printf("Digite uma letra:\n");
    scanf("%c", &caractere);

    if ((caractere >= 'a' && caractere <= 'z') || (caractere >= 'A' && caractere <= 'Z'))
        printf("%c eh uma letra.", caractere);
    else
        printf("%c nao eh uma letra.", caractere);

    return 0;
}

/* 
Digite uma letra:
k
k eh uma letra.

ou

Digite uma letra:
U
U eh uma letra.

ou

Digite uma letra:
*
* nao eh uma letra.

 */
