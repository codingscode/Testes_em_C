#include <stdio.h>


void inverterSentenca();

int main() {
    printf("Digite uma sentenca:\n");
    inverterSentenca();
    return 0;
}

void inverterSentenca() {
    char c;
    scanf("%c", &c);
    if (c != '\n') {
        inverterSentenca();
        printf("%c", c);
    }
}

/* 
Digite uma sentenca:
dirija-se ao caixa
axiac oa es-ajirid
*/
