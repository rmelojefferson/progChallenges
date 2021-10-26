#include <stdio.h>
#include <stdlib.h>

int main() {
	int mat[6][6], i, j, soma = 0;

	for(i = 0; i < 6; i++) {
		for(j = 0; j < 6; j++) {
			printf("Informe o valor da posição [%d][%d]: ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}

	for(i = 0; i < 6; i++) {
		for(j = 0; j < 6; j++) {
			printf("%2d ", mat[i][j]);
		}
		printf("\n");
	}

	for(i = 0; i < 6; i++) {
		for(j = 0; j < 5; j++) {
			if(j + 1 == i) {
				soma += mat[i][j];
			}
		}
	}
	
	printf("A soma da diagonal abaixo da diagonal principal da matriz: %d\n", soma);
	
	return 0;
}

/*Faça um programa que leia uma matriz de tamanho 6 x 6. Calcule e imprima a soma dos elementos dessa matriz que estão abaixo da diagonal principal*/
