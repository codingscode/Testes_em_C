#include <stdio.h>


int main() {
    int quantidade, indice;
    float numero[100], soma = 0.0, media;

    printf("Digite a quantidade de elementos:\n");
    scanf("%d", &quantidade);

    while (quantidade > 100 || quantidade < 1) {
        printf("Erro! numero deve estar no intervalo de (1 ateh 100).\n");
        printf("Digite o numero novamente:\n");
        scanf("%d", &quantidade);
    }

    for (indice = 0; indice < quantidade; ++indice) {
        printf("%d. Digite numero:\n", indice + 1);
        scanf("%f", &numero[indice]);
        soma += numero[indice];
    }

    media = soma / quantidade;
    printf("Media = %.4f", media);
    return 0;
}

/* 
Digite a quantidade de elementos:
3
1. Digite numero:
12
2. Digite numero:
4
3. Digite numero:
6
Media = 7.3333
*/
