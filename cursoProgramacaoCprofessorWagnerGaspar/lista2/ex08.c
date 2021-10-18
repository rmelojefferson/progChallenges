#include <stdio.h>
#include <stdlib.h>

int main() {
	int mes;

	printf("Informe o número correspondente ao mês que deseja saber quantos dias possui: ");
	scanf("%d", &mes);

	switch(mes) {
		case 1:
			printf("O mês de janeiro possui 31 dias\n");
			break;
		case 2:
			printf("O mês de fevereiro possui 28 dias\n");
			break;
		case 3:
			printf("O mês de março possui 31 dias\n");
			break;
		case 4:
			printf("O mês de abril possui 30 dias\n");
			break;
		case 5:
			printf("O mês de maio possui 31 dias\n");
			break;
		case 6:
			printf("O mês de junho possui 30 dias\n");
			break;
		case 7:
			printf("O mês de julho possui 31 dias\n");
			break;
		case 8:
			printf("O mês de agosto possui 31 dias\n");
			break;
		case 9:
			printf("O mês de setembro possui 30 dias\n");
			break;
		case 10:
			printf("O mês de outubro possui 31 dias\n");
			break;
		case 11:
			printf("O mês de novembro possui 30 dias\n");
			break;
		case 12:
			printf("O mês de dezembro possui 31 dias\n");
			break;
		default:
			printf("Valor inválido\n");
	}
	return 0;
}

/*Elabore um programa que, dado o número do mês, indica quantos dias têm esse mês. Utilize para isso a estrutura de seleção switch. 
  Obs.: Considere fevereiro como tendo 28 dias.*/
