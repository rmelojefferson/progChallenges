#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	int mat;
	char nome[25];
	float nota1;
	float nota2;
	float nota3;
} aluno;

int main() {
	aluno a;
	a.mat = 1;
	strcpy(a.nome, "João da Silveira");
	a.nota1 = 5.5;
	a.nota2 = 7.8;
	a.nota3 = 9.0;
	printf("Tamanho da estrutura aluno: %d bytes\n\n", sizeof(aluno));
	return 0;
}

/*Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura deve conter o número de matrícula do aluno, seu nome e as notas de três provas. Escreva um programa que mostre o tamanho em byte dessa estrutura.*/
