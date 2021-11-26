#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void save_mat(int mat[][5], int n) {
	FILE *file;
	file = fopen("matriz.txt", "w");

	if(file == NULL) {
		fputs("\nErro ao abrir o arquivo...\n\n", stderr);
		exit(1);
	}
	
	int i, j;

	for(i = 0; i <n; i++) {
		for(j = 0; j < 5; j++) {
			fprintf(file, "%2d ", mat[i][j]);
		}
		fprintf(file, "\n");
	}
	fclose(file);
	printf("\nArquivo salvo com sucesso!\n\n");
}

int main() {
	int mat[5][5], i, j;

	srand(time(NULL));

	for(i = 0; i < 5; i++) {
		for(j = 0; j < 5; j++) {
			mat[i][j] = rand()%100;
		}
	}
	save_mat(mat, 5);

	return 0;
}

/*Escreva uma função que receba uma matriz e seu tamanho como parâmetros e salve-a em um arquivo texto de nome "matriz.txt". Cada linha da matriz deve ser salva em uma linha do arquivo.*/
