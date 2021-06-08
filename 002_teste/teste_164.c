#include <stdio.h>
#define PI 3.1415


int main() {
    float raio, area;
    printf("Digite o raio:\n");
    scanf("%f", &raio);

    // note o uso de PI
    area = PI*pow(raio, 2);

    printf("Area = %.2f", area);
    return 0;
}

/* 
Digite o raio:
2
Area = 12.57
*/
