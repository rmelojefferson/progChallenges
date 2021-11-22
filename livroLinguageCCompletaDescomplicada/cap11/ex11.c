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

int** preencher(int tam) {
	int **m, i, j;

	m = calloc(tam, sizeof(int*));

	if(m == NULL) {
		printf("\nMemória insuficiente...\n\n");
		exit(1);
	}

	for(i = 0; i < tam; i++) {
		m[i] = calloc(tam, sizeof(int*));
		if(m[i] == NULL) {
			printf("\nMemória insuficiente...\n\n");
			exit(1);
		}
	}
	
	for(i = 0; i < tam; i++) {
		for(j = 0; j < tam; j++) {
			if(i == j) {
				m[i][j] = 1;
			} else {
				m[i][j] = 0;
			}
		}
	}
	return m;
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

	mat = preencher(tam);
	
	for(i = 0; i < tam; i++) {
		for(j = 0; j < tam; j++) {
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	
	for(i = 0; i < tam; i++) {
		free(mat[i]);
	}

	free(mat);

	return 0;
}

/*Escreva uma função que receba como parâmetro um valor N e retorne o ponteiro para uma matriz alocada dinamicamente contendo N linhas e N colunas. Essa matriz deve conter o valor 1 na diagonal principal e 0 nas demais posições*/
