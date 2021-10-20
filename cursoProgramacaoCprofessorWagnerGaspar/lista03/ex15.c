#include <stdio.h>

int main() {
	int num1, num2, total, i;

	printf("Informe o primeiro número: ");
	scanf("%d", &num1);
	
	printf("Informe o segundo número: ");
	scanf("%d", &num2);

	for(i = 1; i <= num1; i++) {
		total += num2;
	}
	printf("%d * %d = %d\n", num1, num2, total);
	return 0;
}

/*Faça um programa que peça ao usuário dois números inteiros e apresente o resultado na multiplicação entre os dois números sem utilizar a operação de multiplicação.*/
