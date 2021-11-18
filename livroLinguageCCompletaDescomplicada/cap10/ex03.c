#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	float vet[10];
	int i;

	srand(time(NULL));

	for(i = 0; i < 10; i++) {
		vet[i] = rand()%100;
		printf("Número %.2f\tEndereço: %p\n", vet[i], &vet[i]);
	}

	return 0;
}

/*Crie um programa que contenh um array de float com 10 elementos. Imprima o endereço de cada posição desse array.*/
