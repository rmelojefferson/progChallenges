#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int meses(int m) {
	char mes[12][20] = {"Janeiro - 31 dias", "Fevereiro - 28 dias", "Março - 31 dias", "Abril - 30 dias", "Maio - 31 dias", "Junho - 30 dias", "julho - 31 dias", "Agosto - 31 dias", "Setembro - 30 dias", "Outubro - 31 dias", "Novembro - 30 dias", "Dezembro - 31 dias"};

	return printf("\n%s\n\n", mes[m-1]);
}

int main() {
	int mes;

	do {
		printf("Informe o número correspondente ao mês: ");
		scanf("%d", &mes);
	} while(mes < 1 || mes > 12);

	meses(mes);
	return 0;
}

/*Faça uma função que receba um número inteiro de 1 a 12 e imprima em tela o mês e a sua quantidade de dias de acordo com o número digitado pelo usuário. Exemplo: Entrada = 4. Saída = abril.*/
