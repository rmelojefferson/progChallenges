#include <stdio.h>
#include <stdlib.h>

int main() {
	int mat[5][7], i, j, soma = 0;

	for(i = 0; i < 5; i++) {
		for(j = 0; j < 7; j++) {
			printf("Informe o valor da posição [%d][%d]: ", i, j);
			scanf("%d", &mat[i][j]);

			soma += mat[i][j];
		}
	}

	printf("\nMatriz:\n");
	for(i = 0; i < 5; i++) {
		for(j = 0; j < 7; j++) {
			printf("%2d ", mat[i][j]);
		}
		printf("\n");
	}

	printf("\nO valor da soma de todos os elementos da matriz: %d\n\n", soma);
	
	return 0;
}

/*Faça um programa que calcule e imprima a soma de todos os elementos de uma matriz 5 x 7.*/
