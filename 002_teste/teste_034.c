#include <stdio.h>


int main() {
    char c;
    printf("Digite uma letra:\n");
    scanf("%c", &c);

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        printf("%c eh uma letra.", c);
    else
        printf("%c nao eh uma letra.", c);

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
