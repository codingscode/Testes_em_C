#include <stdio.h>


int main() {
    char minha_string[1000], caractere;
    int contador = 0;

    printf("Digite uma string:\n");
    fgets(minha_string, sizeof(minha_string), stdin);

    printf("Digite um caractere para encontrar sua frequencia:\n");
    scanf("%c", &caractere);

    for (int i = 0; minha_string[i] != '\0'; ++i) {
        if (caractere == minha_string[i])
            ++contador;
    }

    printf("Frequencia de %c = %d", caractere, contador);
    return 0;
}

/* 
Digite uma string:
borboleta em cima da folha
Digite um caractere para encontrar sua frequencia:
o
Frequencia de o = 3
*/
