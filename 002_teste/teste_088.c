#include <math.h>
#include <stdio.h>


long long converter(int n);

int main() {
    int numero;
    printf("Digite um numero decimal:\n");
    scanf("%d", &numero);
    printf("%d de decimal = %lld para binario\n", numero, converter(numero));
    return 0;
}

long long converter(int n) {
    long long binario = 0;
    int resto, indice = 1, passo = 1;
    while (n != 0) {
        resto = n % 2;
        printf("Passo %d: %d/2, Resto = %d, Quociente = %d\n", passo++, n, resto, n/2);
        n /= 2;
        binario += resto * indice;
        indice *= 10;
    }
    return binario;
}

/* 
Digite um numero decimal:
13
Passo 1: 13/2, Resto = 1, Quociente = 6
Passo 2: 6/2, Resto = 0, Quociente = 3
Passo 3: 3/2, Resto = 1, Quociente = 1
Passo 4: 1/2, Resto = 1, Quociente = 0
13 de decimal = 1101 para binario

ou

Digite um numero decimal:
70
Passo 1: 70/2, Resto = 0, Quociente = 35
Passo 2: 35/2, Resto = 1, Quociente = 17
Passo 3: 17/2, Resto = 1, Quociente = 8
Passo 4: 8/2, Resto = 0, Quociente = 4
Passo 5: 4/2, Resto = 0, Quociente = 2
Passo 6: 2/2, Resto = 0, Quociente = 1
Passo 7: 1/2, Resto = 1, Quociente = 0
70 de decimal = 1000110 para binario
*/