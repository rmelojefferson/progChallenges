#include <stdio.h>
#include <stdlib.h>

typedef struct endereco {
	char rua[50];
	int num;
} end;

typedef struct cadastro {
	char nome[50];
	int idade;
	struct endereco end;
} cad;

int main() {
	cad cad1;

	printf("Informe os dados abaixo para o cadastro:\n\nNome: ");
	scanf("%50[^\n]", cad1.nome);

	printf("Idade: ");
	scanf("%d", &cad1.idade);
	getchar();

	printf("Endereço: ");
	scanf("%50[^\n]", cad1.end.rua);

	printf("Número: ");
	scanf("%d", &cad1.end.num);

	printf("\nNome: %s\nIdade: %d ano(s)\nEndereço: %s, %d\n\n", cad1.nome, cad1.idade, cad1.end.rua, cad1.end.num);
	return 0;
}

/*Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e armazene esses dados em uma estrutura. Em seguida, imprima na tela os dados da estrutura lida.*/
