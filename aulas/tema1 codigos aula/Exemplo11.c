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
 
Aluno aluno[5];
int i = 0;
 
int main() {
    setlocale(LC_ALL,"portuguese");

    for (i = 0; i < 5; i++) {
        aluno[i].codigo = 0;
        strcpy(aluno[i].nome, "NULL");
        aluno[i].datNasc.dia = 0;
        aluno[i].datNasc.mes = 0;
        aluno[i].datNasc.ano = 0;
    }
 
    for (i = 0; i < 5; i++) {
        printf("\n======================================================================");
        printf("\nO codigo do aluno eh: %d ", aluno[i].codigo);
        printf("\nO nome do aluno eh: %s ", aluno[i].nome);
        printf("\nA data de nascimento do aluno eh: %d / %d / %d ", 
             aluno[i].datNasc.dia, aluno[i].datNasc.mes, aluno[i].datNasc.ano);
        printf("\n ");
    }
 
    for (i = 0; i < 5; i++) {
        printf("\n======================================================================");
        printf("\n======================================================================");
        printf("\nDigite o codigo do aluno: ");
        scanf("%d%*c", &aluno[i].codigo);
        printf("\nDigite o nome do aluno: ");
        scanf("%s%*c", &aluno[i].nome);
        printf("\nDigite o dia do nascimento do aluno: ");
        scanf("%d%*c", &aluno[i].datNasc.dia);
        printf("\nDigite o mes do nascimento do aluno: ");
        scanf("%d%*c", &aluno[i].datNasc.mes);
        printf("\nDigite o ano do nascimento do aluno: ");
        scanf("%d%*c", &aluno[i].datNasc.ano);
    }
 
    for (i = 0; i < 5; i++) {
        printf("\n======================================================================");
        printf("\nO codigo do aluno eh: %d ", aluno[i].codigo);
        printf("\nO nome do aluno eh: %s ", aluno[i].nome);
        printf("\nA data de nascimento do aluno eh: %d / %d / %d ",
            aluno[i].datNasc.dia, aluno[i].datNasc.mes, aluno[i].datNasc.ano);
        printf("\n ");
    }
    system("pause");
    return(0);
}

/*

 ======================================================================
 O c??digo do aluno ??: 0
 O nome do aluno ??: NULL
 A data de nascimento do aluno ??: 0 / 0 / 0

 ======================================================================
 O c??digo do aluno ??: 0
 O nome do aluno ??: NULL
 A data de nascimento do aluno ??: 0 / 0 / 0

 ======================================================================
 O c??digo do aluno ??: 0
 O nome do aluno ??: NULL
 A data de nascimento do aluno ??: 0 / 0 / 0

 ======================================================================
 O c??digo do aluno ??: 0
 O nome do aluno ??: NULL
 A data de nascimento do aluno ??: 0 / 0 / 0

 ======================================================================
 O c??digo do aluno ??: 0
 O nome do aluno ??: NULL
 A data de nascimento do aluno ??: 0 / 0 / 0

 ======================================================================
 ======================================================================
 Digite o c??digo do aluno: 123

 Digite o nome do aluno: benjamin

 Digite o dia do nascimento do aluno: 9

 Digite o m??s do nascimento do aluno: 9

 Digite o ano do nascimento do aluno: 1999

 ======================================================================
 ======================================================================
 Digite o c??digo do aluno: 456

 Digite o nome do aluno: esther

 Digite o dia do nascimento do aluno: 18

 Digite o m??s do nascimento do aluno: 4

 Digite o ano do nascimento do aluno: 2013

 ======================================================================
 ======================================================================
 Digite o c??digo do aluno: 789

 Digite o nome do aluno: laila

 Digite o dia do nascimento do aluno: 12

 Digite o m??s do nascimento do aluno: 11

 Digite o ano do nascimento do aluno: 2015

 ======================================================================
 ======================================================================
 Digite o c??digo do aluno: 012

 Digite o nome do aluno: israel

 Digite o dia do nascimento do aluno: 25

 Digite o m??s do nascimento do aluno: 3

 Digite o ano do nascimento do aluno: 2018

 ======================================================================
 ======================================================================
 Digite o c??digo do aluno: 345

 Digite o nome do aluno: daniel

 Digite o dia do nascimento do aluno: 20

 Digite o m??s do nascimento do aluno: 5

 Digite o ano do nascimento do aluno: 2019

 ======================================================================
 O c??digo do aluno ??: 123
 O nome do aluno ??: benjamin
 A data de nascimento do aluno ??: 9 / 9 / 1999

 ======================================================================
 O c??digo do aluno ??: 456
 O nome do aluno ??: esther
 A data de nascimento do aluno ??: 18 / 4 / 2013

 ======================================================================
 O c??digo do aluno ??: 789
 O nome do aluno ??: laila
 A data de nascimento do aluno ??: 12 / 11 / 2015

 ======================================================================
 O c??digo do aluno ??: 12
 O nome do aluno ??: israel
 A data de nascimento do aluno ??: 25 / 3 / 2018

 ======================================================================
 O c??digo do aluno ??: 345
 O nome do aluno ??: daniel
 A data de nascimento do aluno ??: 20 / 5 / 2019
*/

