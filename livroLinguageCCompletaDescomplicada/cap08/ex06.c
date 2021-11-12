#include <stdio.h>
#include <stdlib.h>

typedef struct {
	float n1;
	float n2;
	float n3;
	float media;
} notas;

typedef struct {
	int matricula;
	char nome[50];
	notas nota;
} aluno;

int main() {
	aluno a[5];
	int i, maior = 0;
	float aux = 0;

	for(i = 0; i < 5; i++) {
		printf("Informe o nome do %dº aluno(a): ", i + 1);
		scanf("%50[^\n]", a[i].nome);

		printf("Informe o número da matrícula de %s: ", a[i].nome);
		scanf("%d", &a[i].matricula);
		
		printf("Informe a 1ª nota: ");
		scanf("%f", &a[i].nota.n1);
		
		a[i].nota.media += a[i].nota.n1;

		printf("Informe a 2ª nota: ");
		scanf("%f", &a[i].nota.n2);
		
		a[i].nota.media += a[i].nota.n2;

		printf("Informe a 3ª nota: ");
		scanf("%f", &a[i].nota.n3);

		a[i].nota.media += a[i].nota.n3;

		a[i].nota.media /= 3;

		if(a[i].nota.media > aux) {
			aux = a[i].nota.media;
			maior = i;
		}
		getchar();
	}

	printf("\nAluno com a melhor média:\nNome: %s\nMatrícula: %d\n1ª nota: %.2f\n2ª nota: %.2f\n3ª nota: %.2f\nmedia: %.2f\n\n", a[maior].nome, a[maior].matricula, a[maior].nota.n1, a[maior].nota.n2, a[maior].nota.n3, a[maior].nota.media);

	return 0;
}

/*Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura deve conter o número de matrícula do aluno, seu nome, e as notas de três provas. Agora, escreva um programa que leia os dados de cinco alunos e os armazene nessa estrutura. Em seguida, exiba o nome e as notas do aluno que possui a maior média geral dentre os cinco.*/
