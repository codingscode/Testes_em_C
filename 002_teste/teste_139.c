// Programa para adicionar duas distancias (pe-polegada)
#include <stdio.h>


struct Distancia {
    int pe;
    float polegada;
} dist1, dist2, soma;


int main() {
    printf("Primeira distancia:\n");
    printf("Digite em pe: ");
    scanf("%d", &dist1.pe);

    printf("Digite polegada: ");
    scanf("%f", &dist1.polegada);
    printf("2nd distance\n");

    printf("Digite pe: ");
    scanf("%d", &dist2.pe);

    printf("Digite polegada: ");
    scanf("%f", &dist2.polegada);

    // adicionando pe
    soma.pe = dist1.pe + dist2.pe;
    // adicionando polegadas
    soma.polegada = dist1.polegada + dist2.polegada;

    // mudando para pe se polegada eh maior que 12
    while (soma.polegada >= 12) {
        ++soma.pe;
        soma.polegada = soma.polegada - 12;
    }

    printf("Soma de distancias = %d\'-%.1f\"", soma.pe, soma.polegada);
    return 0;
}

/* 
Primeira distancia:
Digite em pe: 12
Digite polegada: 7.9
2nd distance
Digite pe: 2
Digite polegada: 9.8
Soma de distancias = 15'-5.7"

ou

Primeira distancia:
Digite em pe: 3
Digite polegada: 8
2nd distance
Digite pe: 9
Digite polegada: 1
Soma de distancias = 12'-9.0"
*/
