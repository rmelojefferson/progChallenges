#include <stdio.h>
#include <stdlib.h>

int main() {
	int mat[4][4], i , j, soma_linha[4] = {0}, soma_coluna[4] = {0}, diag_principal = 0, diag_secundaria = 0;

	for(i = 0; i < 4; i++) {
		for(j = 0; j < 4; j++) {
			printf("Informe o número da posição [%d][%d]: ", i, j);
			scanf("%d", &mat[i][j]);

			soma_linha[i] += mat[i][j];
			soma_coluna[j] += mat[i][j];

			if(i == j) {
				diag_principal += mat[i][j];
			}
			if(i + j == 3) {
				diag_secundaria += mat[i][j];
			}
		}
	}
	
	printf("\nMatriz:\n");
	for(i = 0; i < 4; i++) {
		for(j = 0; j < 4; j++) {
			printf("%2d ", mat[i][j]);
		}
		printf("\n");
	}

	printf("\nDiagonal principal: %d\n", diag_principal);
	printf("Diagonal secundária: %d\n", diag_secundaria);
	printf("Soma das linhas: ");
	for(i = 0; i < 4; i++) {
		printf("%d ", soma_linha[i]);
	}
	printf("\nSoma das colunas: ");
	for(i = 0; i < 4; i++) {
		printf("%d ", soma_coluna[i]);
	}
	
	printf("\n");
	if(diag_principal == diag_secundaria) {
		j = diag_principal;
		for(i = 0; i < 4; i++) {
			if(soma_linha[i] != j || soma_coluna[i] != j) {
				printf("\nA matriz não forma um quadrado mágico\n");
				return 0;
			}
		}
		printf("\nA matriz forma um quadrado mágico!\n");
	} else {
		printf("\nA matriz não forma um quadrado mágico\n");
	}
	
	printf("\n");
	
	return 0;
}

/*Dada uma matriz 4 x 4 faça um programa que diga se ela é um Quadrado Mágico ou não.*/
