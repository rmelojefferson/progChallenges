#include <stdio.h>
#include <stdlib.h>

int main() {
	int mat[5][5], i, j, soma = 0;

	for(i = 0; i < 5; i++) {
		for(j = 0; j < 5; j++) {
			printf("Informe o valor da posição [%d][%d]: ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}

	for(i = 0; i < 5; i++) {
		for(j = 0; j < 5; j++) {
			printf("%2d ", mat[i][j]);
		}
		printf("\n");
	}

	for(i = 0; i < 5; i++) {
		for(j = 0; j < 5; j++) {
			if(i + 1 == j) {
				soma += mat[i][j];
			}
		}
	}
	
	printf("A soma da diagonal acima da diagonal principal da matriz: %d\n", soma);
	
	return 0;
}

/*Faça um programa que leia uma matriz de tamanho 5 x 5. Calcule e imprima a soma dos elementos dessa matriz que estão acima da diagonal principal*/
