#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
	int vet[10], i;

	srand(time(NULL));
	
	for(i = 0; i < 10; i++) {
		vet[i] = rand()%100;
		printf("vet[%d] - valor: %d\tendereço: %p\n", i, vet[i], &vet[i]);
	}

	return 0;
}

/*Crie um programa que contenha um array de inteiros com 10 elementos. Imprima o elemento e o endereço de cada posição do array.*/
