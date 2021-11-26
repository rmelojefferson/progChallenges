#include <stdio.h>
#include <stdlib.h>

void file_verify(FILE *fl) {
	if(fl == NULL) {
		fputs("\nErro ao abrir o arquivo\n\n", stderr);
		exit(1);
	}
}

int main() {
	FILE *file1, *file2;
	
	file1 = fopen("nomes_datas.txt", "r");
	file_verify(file1);

	file2 = fopen("nomes_idade.txt", "a+");
	file_verify(file2);
	
	char nome[50];
	int dia, mes, ano, idade;

	while((fscanf(file1, "%s%d%d%d", nome, &dia, &mes, &ano)) != -1) {
		idade = 2021 - ano;
		printf("%s %d anos\n", nome, idade);
		fprintf(file2, "%s %d anos\n", nome, idade);
	}

	fclose(file1);
	fclose(file2);

	return 0;
}

/*Dado um arquivo contendo um conjunto de nomes e datas de nascimento (dia, mês e ano, isto é, três inteiros seguidos), escrever um programa que leia esse arquivo e a data atual e gere outro arquivo contendo o nome e a idade.*/
