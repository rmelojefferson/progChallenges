#include <stdio.h>
#include <stdlib.h>

int main() {
	int mat_a[3][3], mat_b[3][3], mat_c[3][3], i, j;

	for(i = 0; i < 3; i++) {
		for(j = 0; j < 3; j++) {
			printf("Informe o valor da posição [%d][%d] da matriz A: ", i, j);
			scanf("%d", &mat_a[i][j]);
		}
	}

	printf("\n");
	
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 3; j++) {
			printf("Informe o valor da posição [%d][%d] da matriz B: ", i, j);
			scanf("%d", &mat_b[i][j]);

			mat_c[i][j] = mat_a[i][j] + mat_b[i][j];
		}
	}

	printf("\nMatriz A:\n");
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 3; j++) {
			printf("%2d ", mat_a[i][j]);
		}
		printf("\n");
	}

	printf("\nMatriz B:\n");
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 3; j++) {
			printf("%2d ", mat_b[i][j]);
		}
		printf("\n");
	}
	
	printf("\nMatriz C (A + B):\n");
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 3; j++) {
			printf("%2d ", mat_c[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");

	return 0;
}

/*Dadas duas matrizes A e B 3 x 3, faça um programa para calcular a soma das matrizes e salvar em uma matriz C. Imprima as três matrizes.*/
