#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencher(int *vet) {
	int i;

	srand(time(NULL));

	for(i = 0; i < 5; i++) {
		*vet = rand()%100;
		printf("vet[%d]: %d\n", i, *vet);
		vet++;
	}
}

int main() {
	int vet[5];

	preencher(vet);

	return 0;
}

/*Crie uma função que receba dois parâmetros: um vetor e um valor do mesmo tipo do vetor. A função deverá preencher os elementos de vetor com esse valor. Não utilize índices para percorrer o vetor, apenas aritmética de ponteiros.*/
