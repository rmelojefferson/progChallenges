#include <stdio.h>
#include <stdlib.h>

int main() {
	int mat[4][4], i, j, maior10 = 0;

	for(i = 0; i < 4; i++) {
		for(j = 0; j < 4; j++) {
			printf("Informe o valor da posição [%d][%d] da matriz: ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}
	
	for(i = 0; i < 4; i++) {
		for(j = 0; j < 4; j++) {
			if(mat[i][j] > 10) {
				maior10++;
			}
		}
	}
	
	if(maior10 > 0) {
		printf("\nA matriz possui %d número(s) maior(es) que 10.\n\n", maior10);
	} else {
		printf("\nA matriz não possui números maiores que 10.\n\n");
	}

	return 0;
}

/*Leia uma matriz de tamanho 4 x 4. Em seguida, conte e escreva na tela quantos valores maiores do que 10 ela possui.*/
