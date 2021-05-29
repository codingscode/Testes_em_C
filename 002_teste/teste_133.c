#include <stdio.h>


void reverterSentenca();

int main() {
    printf("Digite uma sentenca:\n");
    reverterSentenca();
    return 0;
}

void reverterSentenca() {
    char caractere;
    scanf("%c", &caractere);
            
    if (caractere != '\n') {
        reverterSentenca();
        printf("%c", caractere);
    }
}

/* 
Digite uma sentenca:
michael jackson
noskcaj leahcim
*/
