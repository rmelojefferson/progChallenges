#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int mat[5][4], i, j;

	srand(time(NULL));

	for(i = 0; i < 5; i++) {
		for(j = 0; j < 4; j++) {
			mat[i][j] = rand() % 100;
		}
	}

	printf("\nMatriz gerada:\n");
	for(i = 0; i < 5; i++) {
		for(j = 0; j < 4; j++) {
			printf("%2d ", mat[i][j]);
		}
		printf("\n");
	}

	printf("\nTransposta da matriz:\n");
	for(i = 0; i < 4; i++) {
		for(j = 0; j < 5; j++) {
			printf("%2d ", mat[j][i]);
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}

/*Faça um programa para calcular a transposta de uma matriz 5 x 4. Imprima as duas matrizes na tela.

 1 | 5		1 | 7 | 8
 7 | 3		5 | 3 | 2
 8 | 2*/
