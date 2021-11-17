#include <stdio.h>
#include <stdlib.h>

int soma(int num1, int num2) {
	return num1 + num2;
}

int subtracao(int num1, int num2) {
	return num1 - num2;
}

int divisao(int num1, int num2) {
	return num1 / num2;
}

int multiplicacao(int num1, int num2) {
	return num1 * num2;
}

int main() {
	int num1, num2;
	char operacao;

	printf("Informe o 1º número inteiro: ");
	scanf("%d", &num1);

	printf("Informe o 2º número inteiro: ");
	scanf("%d", &num2);


	do {
		getchar();

		printf("\nDigite o símbolo correspondente entre aspas duplas para escolher a operação:\n\"+\" Adição\n\"-\" Subtração\n\"/\" Divisão\n\"*\" Multiplicação\n");
		scanf("%c", &operacao);

	} while(operacao != '+' && operacao != '-' && operacao != '/' && operacao != '*');


	switch(operacao) {
		case '+':
			printf("\n%d + %d = %d\n\n", num1, num2, soma(num1, num2));
			break;
		case '-':
			printf("\n%d - %d = %d\n\n", num1, num2, subtracao(num1, num2));
			break;
		case '/':
			printf("\n%d / %d = %d\n\n", num1, num2, divisao(num1, num2));
			break;
		case '*':
			printf("\n%d * %d = %d\n\n", num1, num2, multiplicacao(num1, num2));
			break;
	}


	return 0;
}

/*Escreva uma função que receba dois valores numéricos e um símbolo. Esse símbolo representará a operação que se deseja efetuar com os números. Assim, se o símbolo for "+", deverá ser realizada uma adição, se for "-", um subtração, se for "/", um divisão, e, se for "*", será efetuada uma multiplicação. Retorne o resultado da operação para o programa principal.*/
