#include <stdio.h>


int main() {
    char minha_string1[100], minha_string2[100], indice;

    printf("Digite a string minha_string1:\n");
    fgets(minha_string1, sizeof(minha_string1), stdin);

    for (indice = 0; minha_string1[indice] != '\0'; ++indice) {
        minha_string2[indice] = minha_string1[indice];
    }

    minha_string2[indice] = '\0';
    printf("String minha_string2: \n%s", minha_string2);
    return 0;
}

/* 
Digite a string minha_string1:
michael jackson
String minha_string2:
michael jackson
*/
