#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int vet[100], i, validador, aux;

	srand(time(NULL));

	for(i = 0; i < 100; i++) {
		vet[i] = rand() % 500;
	}

	printf("\nVetor na ordem informada:\n");
	for(i = 0; i < 100; i++) {
		printf("%3d ", vet[i]);
	}
	printf("\n");

	do {
		validador = 0;
		for(i = 0; i < 99; i++) {
			if(vet[i] > vet[i+1]) {
				aux = vet[i];
				vet[i] = vet[i+1];
				vet[i+1] = aux;
				validador = 1;
			}
		}
	} while(validador);

	printf("\nVetor ordenado:\n");
	for(i = 0; i < 100; i++) {
		printf("%3d ", vet[i]);
	}
	printf("\n\n");

	return 0;
}

/*Faça um programa para ordenar um vetor com 100 números inteiros. Imprima o vetor antes e após a ordenação.*/
