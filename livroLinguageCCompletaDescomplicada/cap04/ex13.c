#include <stdio.h>
#include <stdlib.h>

int main() {
	float num1, num2, resultado;
	int operacao;

	printf("Escolha uma das operações abaixo (Aperte o número correspondente):\n1 - Adição\n2 - Subtração\n3 - Divisão\n4 - Multiplicação\n");
	scanf("%d", &operacao);

	if(operacao != 1 && operacao != 2 && operacao != 3 && operacao != 4) {
		printf("Não existe operação para o número informado\n");
		return 0;
	}
	printf("Informe o primeiro número: ");
	scanf("%f", &num1);
	
	printf("Informe o segundo número: ");
	scanf("%f", &num2);

	switch(operacao) {
		case 1:
			resultado = num1 + num2;
			printf("%.2f + %.2f = %.2f\n", num1, num2, resultado);
			break;

		case 2:
			resultado = num1 - num2;
			printf("%.2f - %.2f = %.2f\n", num1, num2, resultado);
			break;
		case 3:
			resultado = num1 / num2;
			printf("%.2f / %.2f = %.2f\n", num1, num2, resultado);
			break;
		case 4:
			resultado = num1 * num2;
			printf("%.2f x %.2f = %.2f\n", num1, num2, resultado);
			break;
	}

	return 0;
}

/*Faça um progrma que mostre ao usuário um menu com quatro opções de operações matemáticas (as operações básicas, por exemplo). I usuário escolhe uma das opções, e o seu programa pede dois valores numéricos e realiza a operação, mostrando o resultado.*/
