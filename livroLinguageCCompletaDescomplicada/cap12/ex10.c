#include <stdio.h>
#include <stdlib.h>

int** preencher_matriz(char *fln, int *l, int *c) {
	FILE *file;
	file = fopen(fln, "r");

	if(fln == NULL) {
		fputs("\nErro ao abrir o arquivo...\n\n", stderr);
		exit(1);
	}

	int i, j;

	fscanf(file, "%d%d", &*l, &*c);

	int **mat = calloc(*c, sizeof(int*));

	if(mat == NULL) {
		printf("\nMemória insuficiente\n\n", stderr);
		exit(1);
	}

	for(i = 0; i < *l; i++) {
		mat[i] = calloc(*c, sizeof(int*));
		if(mat[i] == NULL) {
			printf("\nMemória insuficiente\n\n", stderr);
			exit(1);
		}
	}

	for(i = 0; i < *l; i++) {
		for(j = 0; j < *c; j++) {
			fscanf(file, "%d", &mat[i][j]);
		}
	}

	fclose(file);

	return mat;
}

void exibir_matriz(int **mat, int l, int c) {
	int i, j;

	for(i = 0; i < l; i++) {
		for(j = 0; j < c; j++) {
			printf("%2d ", mat[i][j]);
		}
		printf("\n");
	}
	
	for(i = 0; i < l; i++) {
		free(mat[i]);
	}
	free(mat);
}

int main() {
	char fileName[50];
	int **mat, l, c;

	printf("Informe o nome do arquivo (com extensão) contendo as informações da matriz: ");
	scanf("%50[^\n]", fileName);

	mat = preencher_matriz(fileName, &l, &c);
	exibir_matriz(mat, l, c);

	mat = NULL;

	return 0;
}

/*Um arquivo texto possui uma matriz de valores inteiros dentro dele. Os dois primeiros números são as dimensões da matriz(linhas e colunas), enquanto o restante dos números são os valores de cada elemento da matriz. Escreva uma função que receba o nome do arquivo e retorne o ponteiro para uma matriz alocada dinamicamente contendo os valores lidos do arquivo.*/
