#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int matricula;	
	char nome[50];
	float nt1, nt2, nt3;
} aluno;

int main() {
	FILE *file;
	file = fopen("alunos.txt", "r");

	char aux[50];

	if(file == NULL) {
		fputs("\nErro ao abrir o arquivo...\n\n", stderr);
		exit(1);
	}

	aluno a1;

	fscanf(file,"%d\n%50[^\n]%f%f%f", &a1.matricula, a1.nome, &a1.nt1, &a1.nt2, &a1.nt3);
	
	printf("\nMatrícula: %d\nNome: %s\nNota 1: %.2f\nNota 2: %.2f\nNota 3: %.2f\n\n", a1.matricula, a1.nome, a1.nt1, a1.nt2, a1.nt3);
	return 0;
}

/*Faça um programa que leia um arquivo texto contendo os dados de um aluno. Cada linha do arquivo contém o número de matrícula, o nome e as notas de três provas de um aluno. Os dados deve ser lidos e armazenados em uma estrutura.  Em seguida, exiba os dados lidos em tela*/
