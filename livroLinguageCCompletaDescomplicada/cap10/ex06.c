#include <stdio.h>
#include <stdlib.h>

int main() {
	int vet[5], i;

	for(i = 0; i < 5; i++) {
		printf("Informe um número inteiro: ");
		scanf("%d", &vet[i]);
	}

	for(i = 0; i < 5; i++) {
		if(vet[i] % 2 == 0) {
			printf("Endereço do número %d: %p\n", vet[i], &vet[i]);
		}
	}
	return 0;
}

/*Crie um programa que contenha um array com cinco elementos inteiros. Leia esse array do teclado e imprima o endereço das posições contendo valores pares.*/
