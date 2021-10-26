#include <stdio.h>
#include <stdlib.h>

int main() {
	int mat[3][3], i, j, soma = 0;

	for(i = 0; i < 3; i++) {
		for(j = 0; j < 3; j++) {
			printf("Informe o valor da posição [%d][%d] da matriz: ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}

	printf("\n\n");
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 3; j++) {
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}

	for(i = 0; i < 3; i++) {
		for(j = 0; j < 3; j++) {
			if(i + j == 2) {
				soma += mat[i][j];
			}
		}
	}

	printf("\n\n");
	printf("A soma da diagonal secundária é: %d\n\n", soma);
	
	return 0;
}

/*Leia uma matriz de tamanho 3 x 3. Em seguida, imprima a soma dos valores contidos em sua diagonal secundária.*/
