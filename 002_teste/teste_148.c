#include <stdio.h>


struct Distancia {
   int pe;
   float polegada;
} d1, d2, resultado;

int main() {
   // receber primeira entrada de distancia
   printf("Digite primeira distancia:\n");
   printf("Digite pe: ");
   scanf("%d", &d1.pe);
   printf("Digite polegada: ");
   scanf("%f", &d1.polegada);
 
   // receber segunda entrada de distancia
   printf("\nDigite segunda distancia:\n");
   printf("Digite pe: ");
   scanf("%d", &d2.pe);
   printf("Digite polegada: ");
   scanf("%f", &d2.polegada);
   
   // adicionando distancias
   resultado.pe = d1.pe + d2.pe;
   resultado.polegada = d1.polegada + d2.polegada;

   // converter polegadas para pe se maior que 12
   while (resultado.polegada >= 12.0) {
      resultado.polegada = resultado.polegada - 12.0;
      ++resultado.pe;
   }
   printf("\nSoma de distancias = %d\'-%.1f\"", resultado.pe, resultado.polegada);
   return 0;
}

/* 
Digite primeira distancia:
Digite pe: 4
Digite polegada: 3

Digite segunda distancia:
Digite pe: 7
Digite polegada: 1

Soma de distancias = 11'-4.0"
*/
