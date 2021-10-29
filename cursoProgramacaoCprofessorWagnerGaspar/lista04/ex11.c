#include <stdio.h>
#include <stdlib.h>

int main() {
	int mat[5][5] = {0}, i, j;

	for(i = 0; i < 5; i++) {
		for(j = 0; j < 5; j++) {
			if(i == j) {
				printf("%d ", mat[i][j]);
			} else {
				printf("  ");
			}
		}
		printf("\n");
	}
	return 0;
}

/*Faça um programa que imprima na tela a diagonal principal de uma matriz 5 x 5.*/
