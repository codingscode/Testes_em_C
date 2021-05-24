#include <math.h>
#include <stdio.h>


float calcularDP(float dados[]); // calcular desvio padrao

int main() {
    int indice;
    float meus_dados[10];
    printf("Digite 10 elementos:\n");
    for (indice = 0; indice < 10; ++indice)
        scanf("%f", &meus_dados[indice]);
    printf("\nDesvio Padrao = %.6f", calcularDP(meus_dados));
    return 0;
}

float calcularDP(float dados[]) {
    float soma = 0.0, media, dv = 0.0;
    int i;
    for (i = 0; i < 10; ++i) {
        soma += dados[i];
    }
    media = soma / 10;
    for (i = 0; i < 10; ++i) {
        dv += pow(dados[i] - media, 2);
    }
    return sqrt(dv / 10);
}

/*
Digite 10 elementos:
30
2000
34
200
1800
600
1000
630
1400
1700

Desvio Padrao = 711.634216
*/
