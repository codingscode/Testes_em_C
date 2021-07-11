#include <stdio.h>


int main() {
    int dados[5];

    printf("Digite 5 elementos um abaixo do outro:\n");
    for (int i = 0; i < 5; ++i)
        scanf("%d", dados + i);

    printf("Voce digitou:\n");
    for (int i = 0; i < 5; ++i)
        printf("%d\n", *(dados + i));
        
    printf("enderecos:\n");
    for (int i = 0; i < 5; ++i)
        printf("%d\n", dados + i);
    
    return 0;
}

/* 
Digite 5 elementos um abaixo do outro:
5
2
10
1
8
Voce digitou:
5
2
10
1
8
enderecos:
6487552
6487556
6487560
6487564
6487568
*/
