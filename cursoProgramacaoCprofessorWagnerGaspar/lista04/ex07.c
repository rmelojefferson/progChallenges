#include <stdio.h>
#include <stdlib.h>

int main() {
	int vet[100], i, j, aux;

	for(i = 0; i < 100; i++) {
		printf("Informe o %dº número: ", i + 1);
		scanf("%d", &vet[i]);
	}

	printf("\nVetor na ordem informada:\n");
	for(i = 0; i < 100; i++) {
		printf("%2d ", vet[i]);
	}
	printf("\n");

	for(i = 0; i < 100; i++) {
		for(j = i + 1; j < 100; j++) {
			if(vet[i] > vet[j]) {
				aux = vet[i];
				vet[i] = vet[j];
				vet[j] = aux;
			}
		}
	}

	printf("\nVetor ordenado:\n");
	for(i = 0; i < 100; i++) {
		printf("%2d ", vet[i]);
	}
	printf("\n\n");

	return 0;
}

/*Faça um programa para ordenar um vetor com 100 números inteiros. Imprima o vetor antes e após a ordenação.*/
