#include <stdio.h>
#include <stdlib.h>

int main() {
	int mat[4][4], i, j, maior = -1000000;

	for(i = 0; i < 4; i++) {
		for(j = 0; j < 4; j++) {
			printf("Informe o número da posição [%d][%d]: ", i ,j);
			scanf("%d", &mat[i][j]);
		}
	}
	
	for(i = 0; i < 4; i++) {
		for(j = 0; j < 4; j++) {
			if(mat[i][j] > maior) {
				maior = mat[i][j];
			}
		}
	}
	printf("\nMatriz:\n");
	for(i = 0; i < 4; i++) {
		for(j = 0; j < 4; j++) {
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	
	for(i = 0; i < 4; i++) {
		for(j = 0; j < 4; j++) {
			if(mat[i][j] == maior) {
				printf("O maior número informado é %d, e está na posição [%d][%d] da matriz\n",  maior, i, j);
			}
		}
	}
	return 0;
}

/*Faça um programa que leia uma matriz de tamanho 4 x 4. Imprima na tela o maior valor contido nessa matriz e a sua localização (linha e coluna).*/
