#include <stdio.h>
#include <stdlib.h>

int main() {
	int dia;

	printf("Informe o número correspondente ao dia da semana: ");
	scanf("%d", &dia);

	switch(dia) {
		case 1:
			printf("Domingo\n");
			break;
		case 2:
			printf("Segunda-feira\n");
			break;
		case 3:
			printf("Terça-feira\n");
			break;
		case 4:
			printf("Quarta-feira\n");
			break;
		case 5:
			printf("Quinta-feira\n");
			break;
		case 6:
			printf("Sexta-feira\n");
			break;
		case 7:
			printf("Sábado\n");
			break;
		default:
			printf("O dado informado não corresponde a um dia da semana\n");
	}
	return 0;
}

/*Usando o comando switch, escreva um programa que leia um inteiro entre 1 e 7 e imprima o dia da semana correspondente a esse número. Isto é, domingo, se 1, segunda-feira, se 2, e assim por diante.*/
