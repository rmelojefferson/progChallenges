#include <stdio.h>
#include <stdlib.h>

int main() {
	int opcao;
	float dolar, real, conversao;

	printf("Escolha a opção desejada abaixo (digite o número correspondente com a opção escolhida):\n1 - Real para Dólar\n2 - Dólar para Real\n");
	scanf("%d", &opcao);
	getchar();

	switch(opcao) {
		case 1:
			printf("Informe o valor em reais para conversão: R$");
			scanf("%f", &real);
			conversao = real/5.3;
			printf("R$%.2f equivale a US$%.2f\n", real, conversao);
			break;
		case 2:
			printf("Informe o valor em dolares para conversão: US$");
			scanf("%f", &dolar);
			conversao = dolar*5.3;
			printf("US$%.2f equivale a R$%.2f\n", dolar, conversao);
			break;
		default:
			printf("Opção inválida\n");
	}
	return 0;
}

/*Crie um programa em C que permita ao usuário escolher entre fazer a conversão de Real para Dólar ou de Dólar para Real. Utilize como taxa de câmbio US$1.00 igual a R$5.30*/
