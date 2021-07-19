#include <stdio.h>

#define PI 3.1415
#define areaCirculo(r) (PI * pow(r, 2))

int main() {
    float raio, area;

    printf("Digite o raio:\n");
    scanf("%f", &raio);
    area = areaCirculo(raio);
    printf("Area = %.2f", area);

    return 0;
}

/* 
Digite o raio:
4
Area = 50.26
*/