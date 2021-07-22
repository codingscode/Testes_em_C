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
 O código do aluno é: 0
 O nome do aluno é: NULL
 A data de nascimento do aluno é: 0 / 0 / 0

 ======================================================================
 O código do aluno é: 0
 O nome do aluno é: NULL
 A data de nascimento do aluno é: 0 / 0 / 0

 ======================================================================
 O código do aluno é: 0
 O nome do aluno é: NULL
 A data de nascimento do aluno é: 0 / 0 / 0

 ======================================================================
 O código do aluno é: 0
 O nome do aluno é: NULL
 A data de nascimento do aluno é: 0 / 0 / 0

 ======================================================================
 O código do aluno é: 0
 O nome do aluno é: NULL
 A data de nascimento do aluno é: 0 / 0 / 0

 ======================================================================
 ======================================================================
 Digite o código do aluno: 123

 Digite o nome do aluno: benjamin

 Digite o dia do nascimento do aluno: 9

 Digite o mês do nascimento do aluno: 9

 Digite o ano do nascimento do aluno: 1999

 ======================================================================
 ======================================================================
 Digite o código do aluno: 456

 Digite o nome do aluno: esther

 Digite o dia do nascimento do aluno: 18

 Digite o mês do nascimento do aluno: 4

 Digite o ano do nascimento do aluno: 2013

 ======================================================================
 ======================================================================
 Digite o código do aluno: 789

 Digite o nome do aluno: laila

 Digite o dia do nascimento do aluno: 12

 Digite o mês do nascimento do aluno: 11

 Digite o ano do nascimento do aluno: 2015

 ======================================================================
 ======================================================================
 Digite o código do aluno: 012

 Digite o nome do aluno: israel

 Digite o dia do nascimento do aluno: 25

 Digite o mês do nascimento do aluno: 3

 Digite o ano do nascimento do aluno: 2018

 ======================================================================
 ======================================================================
 Digite o código do aluno: 345

 Digite o nome do aluno: daniel

 Digite o dia do nascimento do aluno: 20

 Digite o mês do nascimento do aluno: 5

 Digite o ano do nascimento do aluno: 2019

 ======================================================================
 O código do aluno é: 123
 O nome do aluno é: benjamin
 A data de nascimento do aluno é: 9 / 9 / 1999

 ======================================================================
 O código do aluno é: 456
 O nome do aluno é: esther
 A data de nascimento do aluno é: 18 / 4 / 2013

 ======================================================================
 O código do aluno é: 789
 O nome do aluno é: laila
 A data de nascimento do aluno é: 12 / 11 / 2015

 ======================================================================
 O código do aluno é: 12
 O nome do aluno é: israel
 A data de nascimento do aluno é: 25 / 3 / 2018

 ======================================================================
 O código do aluno é: 345
 O nome do aluno é: daniel
 A data de nascimento do aluno é: 20 / 5 / 2019
*/

