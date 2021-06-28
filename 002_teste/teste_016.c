 #include <stdio.h>


int main() {

    int numero;
    printf("Digite um inteiro:\n");
    scanf("%d", &numero);

    // True se o resto for 0
    if (numero % 2 == 0) {
        printf("%d eh um inteiro par.", numero);
    }
    else {
        printf("%d eh um inteiro impar.", numero);
    }

    return 0;
}

/*
Digite um inteiro:
15
15 eh um inteiro impar.
*/
