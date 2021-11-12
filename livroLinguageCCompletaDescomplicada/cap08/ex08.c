#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char nome[50];
	int idade;
} pessoa;

int main() {
	pessoa p[6];
	int i, maior = 0, menor = 0, aux_maior = 0, aux_menor = 0;

	for(i = 0; i < 6; i++) {
		printf("Informe o nome da %dº pessoa: ", i+1);
		scanf("%50[^\n]", p[i].nome);

		printf("Informe a idade de %s: ", p[i].nome);
		scanf("%d", &p[i].idade);

		if(p[i].idade > aux_maior) {
			aux_maior = p[i].idade;
			maior = i;
		}

		if(p[i].idade < aux_menor) {
			aux_menor = p[i].idade;
			menor = i;
		}
		getchar();
		printf("\n");
	}
	
	printf("Pessoa mais velha: %s\nIdade: %d\n", p[maior].nome, p[maior].idade);
	printf("\nPessoa mais nova: %s\nIdade: %d\n\n", p[menor].nome, p[menor].idade);

	return 0;
}

/*Crie uma estrutura capaz de armazenar o nome e a data de nascimento de uma pessoa. Agora, escreva um programa que leia os dados de seis pessoas. Calcule e exiba os nomes da pessoa mais nova e da mais velha.*/
