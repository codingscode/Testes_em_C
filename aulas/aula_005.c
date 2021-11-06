#include <stdio.h>


void lerVet( int *p, int t ){

	int i;

	for (i = 0; i < t; i++) {

		printf("\tElemento da posicao %d? ", i);
		scanf("%d", p);
		p++;
    }
}

void mostrarVet( int *p, int t ){

	int i;

	for (i = 0; i < t; i++){

		printf("\tPosicao %d: %d\n", i, *p);
		p++;
	}
}

void trocar (int *pv, int x, int y ){
		int aux = pv[x];
		pv[x] = pv[y];
		pv[y] = aux;
}

int divide( int *v, int inf, int sup ) {

	int pivo, esq, dir;

	pivo = v[inf];
	esq = inf;
	dir = sup;

	while (esq < dir) {

		while (v[esq] <= pivo  && esq < sup)
			esq++;

		while (v[dir] > pivo)
			dir--;

		if (esq < dir)
			trocar(v, esq, dir);
	}

	v[inf] = v[dir];
	v[dir] = pivo ;
	return dir;
}

void quickSort( int *p, int inf, int sup ) {

	int posPivo; // posição do pivô

	if (inf >= sup)
		return;

	posPivo= divide(p, inf, sup);
	quickSort(p, inf, posPivo - 1);
	quickSort(p, posPivo + 1, sup);
}


void main(){

	int *p, tam;

	printf("Quantidade de elementos do vetor?");
	scanf("%d", &tam);

	p = (int*) malloc(tam * sizeof(int));

	printf("\nDigite o conteudo do vetor:\n");
	lerVet(p, tam);

	printf("\nConteudo digitado para o vetor:\n");
	mostrarVet(p, tam);

	printf("\nOrdenando o vetor...\n");
	quickSort(p, 0, tam - 1);

	printf("\nConteudo do vetor ja ordenado:\n");
	mostrarVet(p, tam);

	free(p);
}

/* 
Quantidade de elementos do vetor?6

Digite o conteudo do vetor:
        Elemento da posicao 0? 10
        Elemento da posicao 1? 4
        Elemento da posicao 2? 1
        Elemento da posicao 3? 12
        Elemento da posicao 4? 8
        Elemento da posicao 5? 7

Conteudo digitado para o vetor:
        Posicao 0: 10
        Posicao 1: 4
        Posicao 2: 1
        Posicao 3: 12
        Posicao 4: 8
        Posicao 5: 7

Ordenando o vetor...

Conteudo do vetor ja ordenado:
        Posicao 0: 1
        Posicao 1: 4
        Posicao 2: 7
        Posicao 3: 8
        Posicao 4: 10
        Posicao 5: 12


*/
