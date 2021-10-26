#include <stdio.h>
#include <stdlib.h>

int main() {
	float mat[10][3];
	int i, j, k, vet[3] = {0}, aux;

	for(i = 0; i < 10; i++) {
		for(j = 0; j < 3; j++) {
			do {
				printf("Informe a %dº nota do(a) %2dº aluno(a): ", j + 1, i + 1);
				scanf("%f", &mat[i][j]);
			} while(mat[i][j] <= 0);
		}
	}

	//Laço para colocar as notas de cada aluno em ordem crescente
	for(i = 0; i < 10; i++) {
		for(j = 0; j < 3; j++) {
			for(k = j + 1; k < 3; k++) {
				if(mat[i][j] > mat[i][k]) {
					aux = mat[i][j];
					mat[i][j] = mat[i][k];
					mat[i][k] = aux;
				}
			}
		}
	}

	printf("\n");
	for(i = 0; i < 10; i++) {
		printf("Notas do %2dº aluno(a): ", i + 1);
		for(j = 0; j < 3; j++) {
			printf("%.2f ", mat[i][j]);
		}
		printf("\n");
	}

	for(i = 0; i < 10; i++) {
		for(j = 0; j < 3; j++) {
			if(mat[i][j] == 1) {
				vet[0]++;//Armazena os alunos com a menor nota igual a 1
				break;
			} else if(mat[i][j] == 2) {
				vet[1]++;//Armazena os alunos com a menor nota igual a 2
				break;
			} else if(mat[i][j] == 3) {
				vet[2]++;//Armazena os alunos com a menor nota igual a 3
				break;
			}
		}
	}

	printf("\n");
	for(i = 0; i < 3; i++) {
		printf("Alunos(as) que possuem a pior nota igual a %d: %d\n", i + 1, vet[i]);
	}
	printf("\n");

	return 0;
}

/*Leia uma matriz de tamanho 10 x 3 com as notas de 10 alunos em três provas. Em seguida, calcule e escreva na tela o número de alunos cuja pior nota foi na prova 1, o número de alunos cuja pior nota foi 2 e o número de alunos cuja pior nota na prova foi 3.*/
