#include <stdio.h>
#include <stdlib.h>

int main() {
	int mat[4][4] = {0}, i, j;

	for(i = 0; i < 4; i++) {
		for(j = 0; j < 4; j++) {
			if(i - 1 == j) {
				printf("%d ", mat[i][j]);
			} else {
				printf("  ");
			}
		}
		printf("\n");
	}
	return 0;
}

/*Faça um programa que imprima na tela apenas os valores abaixo da diagonal principal de uma matriz 4 x 4.*/
