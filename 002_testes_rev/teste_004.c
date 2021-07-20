#include <stdio.h>


int main() {
    double numero1, numero2, produto;
    printf("Digite dois numeros um abaixo do outro:\n");
    scanf("%lf %lf", &numero1, &numero2);  
 
    produto = numero1 * numero2;

    printf("Produto = %.3lf", produto);  // 3 casas decimais
    
    return 0;
}

/* 
Digite dois numeros um abaixo do outro:
3
4
Produto = 12.000
*/