#include <stdio.h>
#include <stdlib.h>

int main() {
	int mat[3][3], vet[3] = {0}, i, j, soma;

	for(i = 0; i < 3; i++) {
		for(j = 0; j < 3; j++) {
			printf("Informe um valor inteiro para a posição [%d][%d]: ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}

	for(i = 0; i < 3; i++) {
		for(j = 0; j < 3; j++) {
				vet[j] += mat[i][j];
		}
	}
	
	printf("\nMatriz:\n");
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 3; j++) {
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}

	printf("\nA soma de cada coluna é: ");
	for(i = 0; i < 3; i++) {
		printf("%d ", vet[i]);
	}
	
	printf("\n\n");

	return 0;
}

/*Faça um programa que permita ao usuário entrar com uma matriz de tamanho 3 x 3 de números inteiros. Em seguida, calcule um vetor contendo três posições, em que cada posição deverá armazenar a soma dos números de cada coluna da matriz. Exiba na tela esse array. Por exemplo, a matriz

  5 | -8 | 10 |
  1 |  2 | 15 |
 25 | 10 |  7 |

 deverá gerar o vetor:
 31 |  4 | 32 | */
