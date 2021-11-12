#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char nome[50];
	char esporte[20];
	int idade;
	float altura;
} atleta;

int main() {
	atleta atl[5];
	int i, j, mais_velho = 0, aux_idade = 0;
	char aux_nome[50] = "\0", aux_esporte[20] = "\0";
	float aux_altura = 0.0;

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

		getchar();
	}

	for(i = 0; i < 5; i++) {
		for(j = i + 1; j < 5; j++) {
			if(atl[i].idade < atl[j].idade) {
				strcpy(aux_nome, atl[i].nome);
				strcpy(atl[i].nome, atl[j].nome);
				strcpy(atl[j].nome, aux_nome);
				
				aux_idade = atl[i].idade;
				atl[i].idade = atl[j].idade;
				atl[j].idade = aux_idade;
				
				aux_altura = atl[i].altura;
				atl[i].altura = atl[j].altura;
				atl[j].altura = aux_altura;
				
				strcpy(aux_esporte, atl[i].esporte);
				strcpy(atl[i].esporte, atl[j].esporte);
				strcpy(atl[j].esporte, aux_esporte);
			}
		}
	}

	printf("\nAtletas por ordem decrescente de idade:\n");
	for(i = 0; i < 5; i++) {
		printf("\nNome: %s\nIdade: %d\nAltura: %.2f\nEsporte: %s\n", atl[i].nome, atl[i].idade, atl[i].altura, atl[i].esporte);
	}
	printf("\n");

	return 0;
}

/*Usando a estrutura "atleta" do exercício anterior, escreva um programa que leia os dados de cinco atletas e os exiba por ordem de idade, do mais velho para o mais novo*/
