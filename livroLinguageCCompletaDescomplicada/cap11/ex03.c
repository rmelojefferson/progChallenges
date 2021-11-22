#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char nome[50];
	int idade;
	char endereco[50];
} cadastro;

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

void preencher(int n, cadastro vet[]) {
	int i, aux;

	for(i = 0; i < n; i++) {
		printf("\nInforme o %dº nome: ", i+1);
		scanf("%50[^\n]", vet[i].nome);
		getchar();
		
		for(;;) {
			printf("Informe a idade do(a) %s: ", vet[i].nome);
			aux = scanf("%d", &vet[i].idade);

		if(aux == 0 || vet[i].idade < 0) {
			verify(aux, vet[i].idade);
		} else {
			getchar();
			break;
		}
		}

		printf("Informe o endereço do(a) %s: ", vet[i].nome);
		scanf("%50[^\n]", vet[i].endereco);
		std_empty();
	}
}

int main() {
	int num = 0, aux = 0, i;
	cadastro *vet;

	for(;;) {
		printf("Informe um número inteiro positivo: ");
		aux = scanf("%d", &num);

		if(aux == 0 || num < 0) {
			verify(aux, num);
		} else {
			getchar();
			break;
		}
	}

	vet = calloc(num, sizeof(cadastro));

	if(vet == NULL) {
		printf("Memória insuficiente...\n");
		exit(1);
	}

	preencher(num, vet);

	for(i = 0; i < num; i++) {
		printf("\nNome: %s\nIdade: %d\nEndereço: %s\n", vet[i].nome, vet[i].idade, vet[i].endereco);
	}
	printf("\n");
	free(vet)
	return 0;
}

/*Crie uma estrutura chamada Cadastro. Essa estrutura deve conter o nome, a idade e o endereço de uma pessoa. Agora, escreva uma função que receba um inteiro positivo N e retorne o ponteiro para um vetor de tamanho N, alocado dinamicamente, dessa estrutura. Solicite também que o usuário digite os dados desse vetor dentro da função*/
