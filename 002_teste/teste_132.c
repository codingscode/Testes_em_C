#include <stdio.h>


int main() {
    char linha[150];
    int vogais, consoante, digito, espaco;

    vogais = consoante = digito = espaco = 0;

    printf("Digite uma linha de string:\n");
    fgets(linha, sizeof(linha), stdin);

    for (int i = 0; linha[i] != '\0'; ++i) {
        if (linha[i] == 'a' || linha[i] == 'e' || linha[i] == 'i' ||
            linha[i] == 'o' || linha[i] == 'u' || linha[i] == 'A' ||
            linha[i] == 'E' || linha[i] == 'I' || linha[i] == 'O' ||
            linha[i] == 'U' || linha[i] == 'y' || linha[i] == 'Y' ) {
            ++vogais;
        }
        else if ((linha[i] >= 'a' && linha[i] <= 'z') || (linha[i] >= 'A' && linha[i] <= 'Z')) {
            ++consoante;
        }
        else if (linha[i] >= '0' && linha[i] <= '9') {
            ++digito;
        }
        else if (linha[i] == ' ') {
            ++espaco;
        }
    }

    printf("Vogais: %d", vogais);
    printf("\nConsoantes: %d", consoante);
    printf("\nDigitos: %d", digito);
    printf("\nEspacos em branco: %d", espaco);
    return 0;
}

/* 
Digite uma linha de string:
2 borboletas em cima de uma folha
Vogais: 12
Consoantes: 14
Digitos: 1
Espacos em branco: 6

ou

Digite uma linha de string:
o rato roeu a roupa do rei de roma
Vogais: 16
Consoantes: 10
Digitos: 0
Espacos em branco: 8
*/
