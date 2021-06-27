#include <stdio.h>


int main() {
    int testar_inteiro;
    float numero_float;
    double numero_double;
    char caractere;

    printf("Digite um caractere: \n"); 
    scanf("%c", &caractere);     
    printf("Digite um inteiro: \n");
    scanf("%d", &testar_inteiro);  
    printf("Digite um numero float: \n");
    scanf("%f", &numero_float);  
    printf("Digite um numero double: \n");
    scanf("%lf", &numero_double); 

    printf("\n\nNumero inteiro = %d \n", testar_inteiro);
    printf("Numero float = %f \n", numero_float);
    printf("Numero double = %lf \n", numero_double);
    printf("Caractere digitado = %c.\n", caractere);  
    printf("Caractere digitado valor em ascii = %d.\n", caractere);  

    return 0;
}

/*
Digite um caractere:
k
Digite um inteiro:
5
Digite um numero float:
1.73
Digite um numero double:
6.923


Numero inteiro = 5
Numero float = 1.730000
Numero double = 6.923000
Caractere digitado = k.
Caractere digitado valor em ascii = 107.
*/