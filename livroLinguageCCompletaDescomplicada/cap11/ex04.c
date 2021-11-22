#include <stdio.h>
#include <stdlib.h>

void std_empty() { //Função limpa o buffer do teclado
	int aux;

	while(aux != '\n' && aux != EOF) {
		aux = getchar();
	}
}

int verify(int aux, int num) {
	if(aux == EOF) { //Condição encerra o programa se o EOF for acionado ctrl+d | ctrl+z
		fputs("\nPrograma encerrado pelo usuário...\n\n", stderr);
		exit(1);
		aux = 0;
	//Se o retorno de scanf não for 1 ou o número informado for menor que 0, limpa o buffer
	} else if(aux == 0 || num < 0) {
		printf("Número inválido...\n\n");
		std_empty();
		aux = 0;
	} else {
		std_empty();
	}
	return aux;
}

int main() {
	int num = 0, aux = 0, *vet, i;

	for(;;) {
		printf("Informe o tamanho do vetor: ");
		aux = scanf("%d", &num);

		if(aux == 0 || num < 0 || aux == EOF) {
			verify(aux, num);
		} else {
			getchar();
			break;
		}
	}

	vet = calloc(num, sizeof(int));

	if(vet == NULL) {
		printf("Memória insuficiente...\n");
		exit(1);
	}

	for(i = 0; i < num; i++) {
		for(;;) {
			printf("Informe o %dº número: ", i+1);
			aux = scanf("%d", &vet[i]);
			
			if(aux == 0 || vet[i] < 0 || aux == EOF) {
				verify(aux, vet[i]);
			} else {
				getchar();
				break;
			}
		}
	}
	
	printf("\nVetor informado:\n");
	for(i = 0; i < num; i++) {
		printf("%dº número: %d\n", i+1, vet[i], vet[i]);
	}
	printf("\n");
	free(vet);
	return 0;
}

/*Elabore um programa que leia do usuário o tamanho de um vetor a ser lido. Em seguida, faça a alocação dinâmica desse vetor. Por fim, leia o vetor do usuário e o imprima*/
