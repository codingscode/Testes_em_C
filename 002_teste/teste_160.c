#include <stdio.h>


struct estudante {
   char nome[50];
   int altura;
};

int main() {
    struct estudante estud1[5], estud2[5];   
    FILE *ponteiro_arquivo;
    int i;

    ponteiro_arquivo = fopen("./teste_160_arquivo.txt","wb");
    for (i = 0; i < 3; ++i) {
        fflush(stdin);
        printf("Digite nome:\n");
        gets(estud1[i].nome);

        printf("Digite altura:\n"); 
        scanf("%d", &estud1[i].altura); 
    }

    fwrite(estud1, sizeof(estud1), 1, ponteiro_arquivo);
    fclose(ponteiro_arquivo);

    ponteiro_arquivo = fopen("./teste_160_arquivo.txt", "rb");
    fread(estud2, sizeof(estud2), 1, ponteiro_arquivo);
    for (i = 0; i < 3; ++i) {
        printf("Nome: %s\nAltura: %d\n", estud2[i].nome, estud2[i].altura);
    }
    fclose(ponteiro_arquivo);
}

/* 
Digite nome:
ferdinand
Digite altura:
1.79
Digite nome:
simon
Digite altura:
1.7
Digite nome:
vicente
Digite altura:
1.65
Nome: ferdinand
Altura: 1
Nome: simon
Altura: 1
Nome: vicente
Altura: 1
*/
