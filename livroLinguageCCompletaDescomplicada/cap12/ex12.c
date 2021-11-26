#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void save_vet(int *vet,int n) {
	FILE *file;
	file = fopen("vetor.txt", "w");

	if(file == NULL) {
		fputs("\nErro ao abrir o arquivo...\n\n", stderr);
		exit(1);
	}
	
	int i, j;

	for(i = 0; i <n; i++) {
		fprintf(file, "%d\n", vet[i]);
	}
	fclose(file);
	printf("\nArquivo salvo com sucesso!\n\n");
}

int main() {
	int vet[5], i;

	srand(time(NULL));

	for(i = 0; i < 5; i++) {
		vet[i] = rand()%100;
	}
	
	save_vet(vet, 5);

	return 0;
}

/*Escreva uma função que receba um vetor e seu tamanho como parâmetros e salve-a em um arquivo texto de nome "vetor.txt". Cada valor do vetor deve ser salvo em uma linha do arquivo.*/
