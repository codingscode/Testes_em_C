 #include <stdio.h>


int main() {
    int numero1, numero2;

    printf("Digite dois numero inteiros:\n");
    scanf("%d %d", &numero1, &numero2);

    // se usuario digita numero negativo, sinal do numero eh alterado para positivo
    numero1 = ( numero1 > 0) ? numero1 : -numero1;
    numero2 = ( numero2 > 0) ? numero2 : -numero2;

    while (numero1 != numero2) {
        if (numero1 > numero2)
            numero1 -= numero2;
        else
            numero2 -= numero1;
    }
    printf("Maior divisor comum = %d",numero1);

    return 0;
}

/* 
Digite dois numero inteiros:
12
18
Maior divisor comum = 6
*/
