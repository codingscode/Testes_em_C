#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
 

typedef struct {
    int codigo;
    char nome[200];
    struct {
       int dia;
       int mes;
       int ano;
    };
} Aluno;

Aluno aluno;

 
int main(void) {
    setlocale(LC_ALL,"portuguese");
    aluno.codigo = 0;
    strcpy(aluno.nome, "NULL");
    aluno.dia = 0;
    aluno.mes = 0;
    aluno.ano = 0;

    printf("\nO codigo do aluno eh: %d ", aluno.codigo);
    printf("\nO nome do aluno eh: %s ", aluno.nome);
    printf("\nA data de nascimento do aluno eh: %d / %d / %d ", aluno.dia,aluno.mes, aluno.ano);
    printf("\n\n");
    printf("Digite o codigo do aluno: ");
    scanf("%d%*c", &aluno.codigo);
    printf("Digite o nome do aluno: ");
    scanf("%s%*c", &aluno.nome);
    printf("Digite o dia do nascimento do aluno: ");
    scanf("%d%*c", &aluno.dia);
    printf("Digite o mes do nascimento do aluno: ");
    scanf("%d%*c", &aluno.mes);
    printf("Digite o ano do nascimento do aluno: ");
    scanf("%d%*c", &aluno.ano);
    printf("\nO codigo do aluno eh: %d ", aluno.codigo);
    printf("\nO nome do aluno eh: %s ", aluno.nome);
    printf("\nA data de nascimento do aluno eh: %d / %d / %d ", aluno.dia, aluno.mes, aluno.ano);
    printf("\n\n");
    system("pause");
    return(0);
}

/*
 O codigo do aluno eh: 0
O nome do aluno eh: NULL
A data de nascimento do aluno eh: 0 / 0 / 0

Digite o codigo do aluno: 123
Digite o nome do aluno: bob
Digite o dia do nascimento do aluno: 9
Digite o mes do nascimento do aluno: 10
Digite o ano do nascimento do aluno: 2020

O codigo do aluno eh: 123
O nome do aluno eh: bob
A data de nascimento do aluno eh: 9 / 10 / 2020
*/

