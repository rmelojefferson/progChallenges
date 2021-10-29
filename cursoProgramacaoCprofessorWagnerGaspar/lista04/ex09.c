#include <stdio.h>
#include <stdlib.h>

int main() {
	int mat[5][10], vet_linha[5], vet_coluna[10] = {0}, i, j, soma_linha = 0;

	for(i = 0; i < 5; i++) {
		for(j = 0; j < 10; j++) {
			printf("Informe o valor da posição [%d][%d]: ", i, j);
			scanf("%d", &mat[i][j]);
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
			printf("%d ", mat[i][j]);
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
