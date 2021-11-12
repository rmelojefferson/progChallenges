#include <stdio.h>
#include <stdlib.h>

enum meses {jan = 31, fev = 28, mar = 31, abr = 30, mai = 31, jun = 30, jul = 31, ago = 31, set = 30, out = 31, nov = 30, dez = 31};
int main() {
	int mes;

	printf("Informe um número correspondente a um mês do ano: ");
	scanf("%d", &mes);

	while(mes < 1 || mes > 12) {
		printf("\nNúmero inválido\nInforme um número correspondente a um mês do ano: ");
		scanf("%d", &mes);
	}

	switch(mes) {
		case 1:
			printf("\nO mês de janeiro possui %d dias.\n\n", jan);
			break;
		case 2:
			printf("\nO mês de fevereiro possui %d dias.\n\n", fev);
			break;
		case 3:
			printf("\nO mês de março possui %d dias.\n\n", mar);
			break;
		case 4:
			printf("\nO mês de abril possui %d dias.\n\n", abr);
			break;
		case 5:
			printf("\nO mês de maio possui %d dias.\n\n", mai);
			break;
		case 6:
			printf("\nO mês de junho possui %d dias.\n\n", jun);
			break;
		case 7:
			printf("\nO mês de julho possui %d dias.\n\n", jul);
			break;
		case 8:
			printf("\nO mês de agosto possui %d dias.\n\n", ago);
			break;
		case 9:
			printf("\nO mês de setembro possui %d dias.\n\n", set);
			break;
		case 10:
			printf("\nO mês de outubro possui %d dias.\n\n", out);
			break;
		case 11:
			printf("\nO mês de novembro possui %d dias.\n\n", nov);
			break;
		case 12:
			printf("\nO mês de dezembro possui %d dias.\n\n", dez);
			break;

	}

	return 0;
}

/*Crie uma enumeração representando os meses do ano. Agora, escreva um programa que leia um valor inteiro do teclado e exiba o nome do mês correspondente e quantos dias ele possui.*/
