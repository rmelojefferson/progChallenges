#include <stdio.h>
#include <stdlib.h>

int main() {
	float num1,num2;

	printf("Informe o primeiro número: ");
	scanf("%f", &num1);
	
	printf("Informe o segundo número: ");
	scanf("%f", &num2);

	if(num1 > num2) {
		printf("O %.1f é maior que %.1f\n",num1,num2);
	} else if(num1 < num2) {
		printf("O %.1f é maior que %.1f\n",num2,num1);
	} else {
		printf("Os dois números informados são iguais.\n");
	}
	return 0;
}

/*Faça um programa que leia dois números e mostre o maior deles. Se, por acaso, os dois números forem iguais, imprima a mensagem "Números iguais".*/
