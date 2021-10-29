#include <stdio.h>
#include <stdlib.h>

int main() {
	int vet[20], i, j = 19, aux;

	for(i = 0; i < 20; i++) {
		printf("Informe o %dº número: ", i + 1);
		scanf("%d", &vet[i]);
	}
	
	printf("\nVetor informado:\n");
	for(i = 0; i < 20; i++) {
		printf("%d ", vet[i]);
	}
		
	for(i = 0; i < 10; i++) {
		aux = vet[i];
		vet[i] = vet[j];
		vet[j] = aux;
		j--;
	}

	printf("\nVetor alterado:\n");
	for(i = 0; i < 20; i++) {
		printf("%d ", vet[i]);
	}
	printf("\n\n");

	return 0;
}

/*Escrever um programa que lê um vetor N de tamanho 20 e o imprime na tela. Em seguida, troque o 1ª elemento com o último, o 2ª com o penúltimo, ... até o 10ª com o 11ª. Imprima o vetor N modificado.*/
