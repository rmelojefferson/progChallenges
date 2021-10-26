#include <stdio.h>
#include <stdlib.h>

int main() {
	int mat_a[5][5], mat_b[5][5], i, j;

	for(i = 0; i < 5; i++) {
		for(j = 0; j < 5; j++) {
			printf("Informe o valor da posição [%d][%d]: ", i, j);
			scanf("%d", &mat_a[i][j]);

			mat_b[i][j] = mat_a[i][j] * mat_a[i][j];
		}
	}

	printf("\nMatriz A: \n");
	for(i = 0; i < 5; i++) {
		for(j = 0; j < 5; j++) {
			printf("%2d ", mat_a[i][j]);
		}
		printf("\n");
	}
	
	printf("\nMatriz B = matriz A²: \n");
	for(i = 0; i < 5; i++) {
		for(j = 0; j < 5; j++) {
			printf("%2d ", mat_b[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	return 0;
}

/*Faça um programa que leia uma matriz A de tamanho 5 x 5. Em seguida, calcule e imprima a matriz B, sendo que B = A².*/
