#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void maiorMenor(int v[], int tam, int *maior, int *menor) {
	int i;
	*maior = 0;
	*menor = 100;
	
	for(i = 0; i < tam; i++) {
		if(v[i] > *maior) {
			*maior = v[i];
		}
		if(v[i] < *menor) {
			*menor = v[i];
		}
	}
}

int main() {
	int vet[10], maior, menor, i;

	srand(time(NULL));

	for(i = 0; i < 10; i++) {
		vet[i] = rand() % 100;
		printf("%d ", vet[i]);
	}

	maiorMenor(vet, 10, &maior, &menor);
	printf("\nMaior: %d\nMenor: %d\n\n", maior, menor);


	return 0;
}

/*Escreva um procedimento que receba um vetor inteiro, seu tamanho e os endereços de duas variáveis inteiras, menor e maior, salve nestas variáveis o menor e o maior valor do vetor.*/
