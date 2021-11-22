#include <stdio.h>
#include <stdlib.h>

void std_empty() {
	int aux;

	while(aux != '\n' && aux != EOF) {
		aux = getchar();
	}
}

int verify(int aux, int num) {
	if(aux == EOF) {
		fputs("\nPrograma encerrado pelo usuário...\n\n", stderr);
		exit(1);
	} else if(aux == 0 || num < 2) {
		fputs("\nValor inválido\n\n", stderr);
		std_empty();
		aux = 0;
	} else{
		std_empty();
	}
	return aux;
}

int main() {
	int **mat, i, j, tam = 0, aux;
	
	for(;;) {
		printf("Informe o tamanho da matriz: ");
		aux = scanf("%d", &tam);

		if(aux == 0 || tam < 2 || aux == EOF) {
			verify(aux, tam);
		} else {
			getchar();
			break;
		}
	}

	mat = calloc(tam, sizeof(int*));

	if(mat == NULL) {
		printf("\nMemória insuficiente...\n\n");
		exit(1);
	}

	for(i = 0; i < tam; i++) {
		mat[i] = calloc(tam, sizeof(int*));
		if(mat[i] == NULL) {
			printf("\nMemória insuficiente...\n\n");
			exit(1);
		}
	}
	
	for(i = 0; i < tam; i++) {
		for(j = 0; j < tam; j++) {
			if(i == j) {
				mat[i][j] = 0;
			} else if(j < i) {
				mat[i][j] = -1;
			} else {
				mat[i][j] = 1;
			}
		}
	}

	for(i = 0; i < tam; i++) {
		for(j = 0; j < tam; j++) {
			printf("%2d ", mat[i][j]);
		}
		printf("\n");
	}
	
	for(i = 0; i < tam; i++) {
		free(mat[i]);
	}

	free(mat);

	return 0;
}

/*Escreva um programa que leia um inteiro N e crie uma matriz alocada dinamicamente contendo N linhas e N colunas. Essa matriz deve conter o valor 0 na diagonal principal, o valor 1 nos elementos acima da diagonal principal e o valor -1 nos elementos abaixo da diagona principal*/
