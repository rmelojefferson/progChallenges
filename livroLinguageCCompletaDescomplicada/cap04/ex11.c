#include <stdio.h>
#include <stdlib.h>

int main() {
	int mes;

	printf("Informe o número do mês: ");
	scanf("%d", &mes);

	switch(mes) {
		case 1:
			printf("Janeiro\n");
			break;
		case 2:
			printf("Fevereiro\n");
			break;
		case 3:
			printf("Março\n");
			break;
		case 4:
			printf("Abril\n");
			break;
		case 5:
			printf("Maio\n");
			break;
		case 6:
			printf("Junho\n");
			break;
		case 7:
			printf("Julho\n");
			break;
		case 8:
			printf("Agosto\n");
			break;
		case 9:
			printf("Setembro\n");
			break;
		case 10:
			printf("Outubro\n");
			break;
		case 11:
			printf("Novembro\n");
			break;
		case 12:
			printf("Dezembro\n");
			break;
		default:
			printf("Esse número não corresponde a nenhum mês do ano\n");
	}
	return 0;
}

/*Faça um programa que informe o mês de acordo com o número digitado pelo usuário. Exemplo: Entrada = 4. Saída = Abril.*/
