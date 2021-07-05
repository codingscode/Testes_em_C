#include <stdio.h>


void inverterSentenca();

int main() {
    printf("Digite uma sentenca:\n");
    inverterSentenca();
    return 0;
}

void inverterSentenca() {
    char caractere;
    scanf("%c", &caractere);
    if (caractere != '\n') {
        inverterSentenca();
        printf("%c", caractere);
    }
}

/* 
Digite uma sentenca:
dirija-se ao caixa
axiac oa es-ajirid

ou

Digite uma sentenca:
o rato roeu a roupa do rei de roma
amor ed ier od apuor a ueor otar o
*/
