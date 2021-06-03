#include <stdio.h>


struct Momento {
   int segundos;
   int minutos;
   int horas;
};

void diferencaEntreMomentos(struct Momento t1, struct Momento t2, struct Momento *delta);

int main() {
   struct Momento mInicio, mParada, diferenca;

   printf("Digite o momento de inicio.\n");
   printf("Digite horas, minutos e segundos: ");
   scanf("%d %d %d", &mInicio.horas, &mInicio.minutos, &mInicio.segundos);

   printf("Digite o momento de parada.\n");
   printf("Digite horas, minutos e segundos: ");
   scanf("%d %d %d", &mParada.horas, &mParada.minutos, &mParada.segundos);

   // diferenca entre momento de inicio e parada
   diferencaEntreMomentos(mInicio, mParada, &diferenca);
   printf("\nDiferenca de tempo: %d:%d:%d - ", mInicio.horas, mInicio.minutos, mInicio.segundos);
   printf("%d:%d:%d ", mParada.horas, mParada.minutos, mParada.segundos);
   printf("= %d:%d:%d\n", diferenca.horas, diferenca.minutos, diferenca.segundos);
   return 0;
}

// Computa diferenca entre momento
void diferencaEntreMomentos(struct Momento inicio, struct Momento parada, struct Momento *diferenca) {
   while (parada.segundos > inicio.segundos) {
      --inicio.minutos;
      inicio.segundos += 60;
   }
   diferenca->segundos = inicio.segundos - parada.segundos;
   while (parada.minutos > inicio.minutos) {
      --inicio.horas;
      inicio.minutos += 60;
   }
   diferenca->minutos = inicio.minutos - parada.minutos;
   diferenca->horas = inicio.horas - parada.horas;
}

/* 
Digite o momento de inicio.
Digite horas, minutos e segundos: 8 12 43
Digite o momento de parada.
Digite horas, minutos e segundos: 14 7 32

Diferenca de tempo: 8:12:43 - 14:7:32 = -6:5:11
*/
