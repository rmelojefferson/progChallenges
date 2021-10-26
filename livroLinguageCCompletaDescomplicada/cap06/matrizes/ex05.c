#include <stdio.h>
#include <stdlib.h>

int main() {
	int mat[4][4], i, j, negativos = 0;

	for(i = 0; i < 4; i++) {
		for(j = 0; j < 4; j++) {
			printf("Informe o valor da posição [%d][%d] da matriz: ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}
	
	for(i = 0; i < 4; i++) {
		for(j = 0; j < 4; j++) {
			if(mat[i][j] < 0) {
				negativos++;
			}
		}
	}
	
	if(negativos > 0) {
		printf("\nA matriz possui %d número(s) negativo(s).\n\n", negativos);
	} else {
		printf("\nA matriz não possui números negativos.\n\n");
	}

	return 0;
}

/*Leia uma matriz de tamanho 4 x 4. Em seguida, conte e escreva na tela quantos valores negativos ela possui*/
