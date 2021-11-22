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
	} else if(aux == 0 || num < 0) {
		fputs("\nDado inválido\n\n", stderr);
		std_empty();
		aux = 0;
	} else {
		std_empty();
	}
	return 0;
}


void preencher(int v[], int num) {
	int i;

	for(i = 0; i < num; i++) {
		v[i] = i;
	}

	for(i = 0; i < num; i++) {
		printf("%d ", v[i]);
	}
	printf("\n");
}

int main() {
	int num, *vet, aux;
	
	for(;;) {
		printf("Informe o tamanho do vetor: ");
		aux = scanf("%d", &num);

		if(aux == 0 || aux == EOF || num < 0) {
			verify(aux, num);
		} else {
			getchar();
			break;
		}
	}
		
	vet = calloc(num, sizeof(int*));

	if(vet == NULL) {
		printf("\nMemória insuficiente...\n\n");
	}

	preencher(vet, num);

	free(vet);

	return 0;
}

/*Faça uma função que retorne o ponteiro para um vetor de N elementos inteiros alocados dinamicamente. O array deve ser preenchido com valores de 0 a N-1*/
