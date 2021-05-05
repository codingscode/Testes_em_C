#include <stdio.h>


int main() {
    char c;
    int vogal_minuscula, vogal_maiuscula;
    printf("Digite um letra:\n");
    scanf("%c", &c);

    // avalia para 1 se variavel c eh vogal minuscula
    vogal_minuscula = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y');

    // avalia para 1 se variavel c eh vogal maiuscula
    vogal_maiuscula = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y');

    // avalia para 1 (true) se c eh uma vogal
    if (vogal_minuscula || vogal_maiuscula)
        printf("%c eh uma vogal.", c);
    else
        printf("%c eh uma consoante.", c);
    return 0;
}

/* 
Digite um letra:
e
e eh uma vogal.
*/
