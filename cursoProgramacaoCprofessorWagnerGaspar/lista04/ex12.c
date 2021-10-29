#include <stdio.h>
#include <stdlib.h>

int main() {
	int mat[7][7] = {0}, i, j;

	for(i = 0; i < 7; i++) {
		for(j = 0; j < 7; j++) {
			if(i + j == 6) {
				printf("%d ", mat[i][j]);
			} else {
				printf("  ");
			}
		}
		printf("\n");
	}
	return 0;
}

/*Faça um programa que imprima na tela a diagonal secundária de uma matriz 7 x 7.*/
