#include <stdio.h>
#include <stdlib.h>

int main() {
	int vet_a[25], vet_b[25], vet_total[25], i;

	for(i = 0; i < 25; i++) {
		printf("Informe o %dº número do 1º vetor: ", i + 1);
		scanf("%d", &vet_a[i]);
	}
	
	printf("\n");
	for(i = 0; i < 25; i++) {
		printf("Informe o %dº número do 2º vetor: ", i + 1);
		scanf("%d", &vet_b[i]);

		vet_total[i] = vet_a[i] + vet_b[i];
	}
	
	printf("\nVetor A: ");
	for(i = 0; i < 25; i++) {
		printf("%d ", vet_a[i]);
	}
	printf("\n");
	
	printf("Vetor B: ");
	for(i = 0; i < 25; i++) {
		printf("%d ", vet_b[i]);
	}
	
	printf("\nSoma dos vetores: ");
	for(i = 0; i < 25; i++) {
		printf("%d ", vet_total[i]);
	}
	printf("\n\n");
	return 0;
}

/*Faça um programa que some o conteúdo de dois vetores de tamanho 25 e armazene o resultado em um terceiro vetor. Imprima os três vetores na tela.*/
