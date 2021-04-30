#include <stdio.h>

/* 
int	                      %d
char	                  %c
float	                  %f
double	                  %lf
short int	              %hd
unsigned int	          %u
long int	              %li
long long int	          %lli
unsigned long int	      %lu
unsigned long long int	  %llu
signed char	              %c
unsigned char	          %c
long double	              %Lf
*/

int main() {
    int a;
    float b;

    printf("Digite um numero inteiro, aperte enter, digite um numero float:\n");
  
    // recebendo multiplas entradas
    scanf("%d%f", &a, &b);

    printf("Voce digitou %d e %f", a, b);  
    return 0;
}

/*
Digite um numero inteiro, aperte enter, digite um numero float:
82
12.56
Voce digitou 82 e 12.560000
*/
