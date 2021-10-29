#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int mat[5][10], vet_linha[5], vet_coluna[10] = {0}, i, j, soma_linha = 0;

	srand(time(NULL));

	for(i = 0; i < 5; i++) {
		for(j = 0; j < 10; j++) {
			mat[i][j] = rand() % 100;
		}
	}
	
	for(i = 0; i < 5; i++) {
		for(j = 0; j < 10; j++) {
			soma_linha += mat[i][j];

			vet_coluna[j] += mat[i][j];
		}
		vet_linha[i] = soma_linha;
		soma_linha = 0;
	}
	printf("\n");
	for(i = 0; i < 5; i++) {
		for(j = 0; j < 10; j++) {
			printf("%2d ", mat[i][j]);
		}
		printf("\n");
	}
					
	printf("\nVetor com a soma de cada linha;\n");
	for(i = 0; i < 5; i++) {
		printf("%d ", vet_linha[i]);
	}
	
	printf("\n\nVetor com a soma de cada coluna;\n");
	for(i = 0; i < 10; i++) {
		printf("%d ", vet_coluna[i]);
	}
	printf("\n\n");
	return 0;
}

/*Crie um programa que preencha uma matriz 5x10 com números inteiros. Em seguida faça:
a) some cada uma das linhas armazenando o resultado em um vetor;
b) some cada uma das colunas armazenando o resultado em um vetor;
c) Imprima os dois vetores identificando qual é a soma das linhas e qual é a soma das colunas.*/
