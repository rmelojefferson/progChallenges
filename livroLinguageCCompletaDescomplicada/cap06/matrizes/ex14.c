#include <stdio.h>
#include <stdlib.h>

int main() {
	int mat[5][5], i, j, soma = 0, soma_outros = 0;

	for(i = 0; i < 5; i++) {
		for(j = 0; j < 5; j++) {
			printf("Informe o valor da posição [%d][%d]: ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}

	for(i = 0; i < 5; i++) {
		for(j = 0; j < 5; j++) {
			if(i != j && i + j != 4) {
				soma_outros += mat[i][j];
			} else {
				soma += mat[i][j];
			}
		}
	}
	
	printf("\n");
	for(i = 0; i < 5; i++) {
		for(j = 0; j < 5; j++) {
			printf("%2d ", mat[i][j]);
		}
		printf("\n");
	}

	printf("\nO valor da soma dos elementos que fazem parte da diagonal principal e secundária: %d\n", soma);
	printf("\nO valor da soma dos elementos que não fazem parte da diagonal principal e secundária: %d\n", soma_outros);
	printf("\nA diferença entre a soma dos elementos da diagonal principal e secundária em relação aos demais elementos: %d\n\n", soma - soma_outros);
	return 0;
}

/*Faça um programa que leia uma matriz 5 x 5. Calcule a soma dos elementos dessa matriz que pertencem à diagonal principal e secundária. Calcule também a soma dos elementos que não pertecem a nenhuma das duas diagonais. Imprima na tela a diferença entre os dois valores.*/
