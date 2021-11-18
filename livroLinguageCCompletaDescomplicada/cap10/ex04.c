#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	float vet[3][3];
	int i, j;

	srand(time(NULL));

	for(i = 0; i < 3; i++) {
		for(j = 0; j < 3; j++) {
			vet[i][j] = rand()%100;
			printf("[%d][%d] Número %.2f\tEndereço: %p\n", i, j, vet[i][j], &vet[i][j]);
		}
	}

	return 0;
}

/*Crie um programa que contenha uma matriz de float com 3 linhas e 3 colunas. Imprima o endereço de cada posição desse array.*/
