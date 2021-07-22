#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
 

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;
 
typedef struct { 
    int codigo;
    char nome[200];
    Data datNasc;
} Aluno;


Aluno aluno;

 
int main() { 
    setlocale(LC_ALL,"portuguese");
    aluno.codigo = 0;
    strcpy(aluno.nome, "NULL");
    aluno.datNasc.dia = 0;
    aluno.datNasc.mes = 0;
    aluno.datNasc.ano = 0;
    printf("\nO codigo do aluno eh: %d ", aluno.codigo);
    printf("\nO nome do aluno eh: %s ", aluno.nome);
    printf("\nA data de nascimento do aluno eh: %d / %d / %d ", aluno.datNasc.dia, aluno.datNasc.mes, aluno.datNasc.ano);
    printf("\n \n");
    printf("Digite o codigo do aluno: ");
    scanf("%d%*c", &aluno.codigo);
    printf("Digite o nome do aluno: ");
    scanf("%s%*c", &aluno.nome);
    printf("Digite o dia do nascimento do aluno: ");
    scanf("%d%*c", &aluno.datNasc.dia);
    printf("Digite o mes do nascimento do aluno: ");
    scanf("%d%*c", &aluno.datNasc.mes);
    printf("Digite o ano do nascimento do aluno: ");
    scanf("%d%*c", &aluno.datNasc.ano);
    printf("\nO codigo do aluno eh: %d ", aluno.codigo);
    printf("\nO nome do aluno eh: %s ", aluno.nome);
    printf("\nA data de nascimento do aluno eh: %d / %d / %d ", aluno.datNasc.dia, aluno.datNasc.mes, aluno.datNasc.ano);
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
Digite o mes do nascimento do aluno: 11
Digite o ano do nascimento do aluno: 2013

O codigo do aluno eh: 123
O nome do aluno eh: bob
A data de nascimento do aluno eh: 9 / 11 / 2013
*/
