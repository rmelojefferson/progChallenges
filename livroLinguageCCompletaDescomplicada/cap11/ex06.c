#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
	} else if(aux == 0 || num < 1) {
		fputs("\nValor inválido\n\n", stderr);
		std_empty();
		aux = 0;
	} else{
		std_empty();
	}
	return aux;
}

int verifica_matriz(int **v, int l, int c, int n) {
	int i, j, aux = 0;

	for(i = 0; i < l; i++) {
		for(j = 0; j < c; j++) {
			if(v[i][j] == n) {
				aux = 1;
			}
		}
	}
	return aux;
}


int main() {
	int **vet, i, j, linha = 0, coluna = 0, aux, num;
	
	for(;;) {
		printf("Informe a quantidade de linhas da matriz: ");
		aux = scanf("%d", &linha);

		if(aux == 0 || linha < 1 || aux == EOF) {
			verify(aux, linha);
		} else {
			getchar();
			break;
		}
	}
	
	for(;;) {
		printf("Informe a quantidade de colunas da matriz: ");
		aux = scanf("%d", &coluna);

		if(aux == 0 || coluna < 1 || aux == EOF) {
			verify(aux, coluna);
		} else {
			getchar();
			break;
		}
	}
	
	vet = calloc(linha*coluna, sizeof(int*));

	if(vet == NULL) {
		printf("\nMemória insuficiente...\n\n");
		exit(1);
	}

	for(i = 0; i < linha; i++) {
		vet[i] = calloc(linha*coluna, sizeof(int*));
		if(vet[i] == NULL) {
			printf("\nMemória insuficiente...\n\n");
			exit(1);
		}
	}
	
	srand(time(NULL));

	for(i = 0; i < linha; i++) {
		for(j = 0; j < coluna; j++) {
			vet[i][j] = rand()%100;
			while(vet[i][j] == 0) {
				vet[i][j] = rand()%100;
			}
		}
	}
	
	for(i = 0; i < linha; i++) {
		for(j = 0; j < coluna; j++) {
			printf("%2d ", vet[i][j]);
		}
		printf("\n");
	}
	
	for(;;) {
		printf("Informe um número : ");
		aux = scanf("%d", &num);

		if(aux == 0 || num < 1 || aux == EOF) {
			verify(aux, num);
		} else {
			getchar();
			break;
		}
	}

	if(verifica_matriz(vet, linha, coluna, num) == 1) {
		printf("\nEsse número está na matriz\n\n");
	} else {
		printf("\nEsse número não está na matriz\n\n");
	}

	for(i = 0; i < linha; i++) {
		free(vet[i]);
	}

	free(vet);

	return 0;
}

/*Escreva um programa que aloque dinamicamente uma matriz de inteiros. As dimensões da matriz deverão ser lidas do usuário, Em seguida, escreva uma função que receba um valor e retorne 1, caso o valor esteja na matriz, ou retorne 0, no caso contrário*/
