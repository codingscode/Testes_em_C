#include <stdio.h>
#include <stdlib.h>


//Estrutura base do no.
struct no {
    int nData;
    struct no *proximo;
};
 
//Funcao pra printar o no na tela.
void mostrarTudo(struct no *p) {
    printf("Mostrando a lista:\n"); 
    
    if (p) {
        do {
            printf("%d\n", p->nData);
            p = p->proximo;
        }
        while (p);
    }
    else
        printf("Lista vazia.");
}
  

int main(void) {
    struct no *pNo1 = NULL;
    struct no *pNo2 = NULL;
    struct no *pNo3 = NULL;
     
    //Criando os nos e associando os dados.
    pNo1 = (struct no*) malloc(sizeof(struct no*));
    pNo1->nData = 10;
     
    pNo2 = (struct no*) malloc(sizeof(struct no*));
    pNo2->nData = 20;
     
    pNo3 = (struct no*) malloc(sizeof(struct no*));
    pNo3->nData = 30;
     
    //Conectando os nos
    pNo1->proximo = pNo2;
    pNo2->proximo = pNo3;  
    pNo3->proximo = NULL;
     
    //Mostrando a lista.
    if (pNo1)
        printf("pNo1: %d\n", pNo1);  
        mostrarTudo(pNo1);
    
    return 0;
}

/*
pNo1: 1a1480
Mostrando a lista:
10
20
30
*/
