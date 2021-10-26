#include <stdio.h>
#include <stdlib.h>

int main() {
	int mat[3][3], i, j;

	for(i = 0; i < 3; i++) {
		for(j = 0;j < 3; j++) {
			printf("Informe o número [%d][%d] da matriz: ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}
	for(i = 0; i < 3; i++) {
		for(j = 0;j < 3; j++) {
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}


	return 0;
}

/*Faça um programa que leia um matriz de tamanho 3 x 3. Imprima na tela o menor valor contido nessa matriz*/
