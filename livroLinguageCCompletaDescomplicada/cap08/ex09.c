#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char nome[50];
	char esporte[20];
	int idade;
	float altura;
} atleta;

int main() {
	atleta atl[5];
	int i, mais_velho = 0, maior_altura = 0, aux_altura = 0, aux_idade = 0;

	for(i = 0; i < 5; i++) {
		printf("Informe o nome do(a) %dº atleta: ", i+1);
		scanf("%50[^\n]", atl[i].nome);

		printf("Idade do(a) %s: ", atl[i].nome);
		scanf("%d", &atl[i].idade);

		printf("Altura do(a) %s (Troque a vírgula por ponto): ", atl[i].nome);
		scanf("%f", &atl[i].altura);

		getchar();

		printf("Esporte do(a) %s: ", atl[i].nome);
		scanf("%20[^\n]", atl[i].esporte);

		if(atl[i].idade > mais_velho) {
			mais_velho = atl[i].idade;
			aux_idade = i;
		}
		if(atl[i].altura > maior_altura) {
			maior_altura = atl[i].altura;
			aux_altura = i;
		}
		getchar();
	}

	if(aux_altura == aux_idade) {
		printf("\nO(A) atleta mais velho(a) e mais alto(a):\nNome do atleta: %s\nIdade: %d\nAltura: %.2f\nEsporte: %s\n\n", atl[aux_altura].nome, atl[aux_altura].idade, atl[aux_altura].altura, atl[aux_altura].esporte);
	} else {
		printf("\nO(A) atleta mais velho(a):\nNome do atleta: %s\nIdade: %d\nAltura: %.2f\nEsporte: %s\n", atl[aux_idade].nome, atl[aux_idade].idade, atl[aux_idade].altura, atl[aux_idade].esporte);
		printf("\nO(A) atleta mais alto(a):\nNome do atleta: %s\nIdade: %d\nAltura: %.2f\nEsporte: %s\n\n", atl[aux_altura].nome, atl[aux_altura].idade, atl[aux_altura].altura, atl[aux_altura].esporte);
	}
	return 0;
}

/*Crie uma estrutura representando um atleta. Essa estrutura deve conter o nome do atleta, seu esporte, idade e altura. Agora, escreva um programa que leia os dados de cinco atletas. Calcule e exiba os nomes do atleta mais alto e do mais velho.*/
