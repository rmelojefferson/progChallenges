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
	} else if(aux == 0) {
		fputs("\nDado inválido\n\n", stderr);
		std_empty();
		aux = 0;
	} else {
		std_empty();
	}
	return 0;
}

int* rtn_ptr(int n) {
	int *v;
	
	v = calloc(n, sizeof(int*));
			
	if(n <= 0) {
		v = NULL;
		fputs("\nPonteiro nulo\n\n", stderr);
	}
	return v;
}

int main() {
	int num, *vet, aux, i;
	
	for(;;) {
		printf("Informe o tamanho do vetor: ");
		aux = scanf("%d", &num);

		if(aux == 0 || aux == EOF) {
			verify(aux, num);
		} else {
			getchar();
			break;
		}
	}

	vet = rtn_ptr(num);
	
	if(vet != NULL) {
		for(i = 0; i < num; i++) {
			vet[i] = i+1;
			printf("%d ", vet[i]);
		}
		printf("\n\n");
	}

	free(vet);

	return 0;
}

/*Escreva uma função que receba um valor inteiro positivo N por parâmetro e retorne o ponteiro para um vetor de tamanho N alocado dinamicamente. Se N for negativo ou igual a zero, um ponteiro nulo deverá ser retornado.*/
