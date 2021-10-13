#include <stdio.h>
#include <stdlib.h>

int main() {
	int num;

	printf("Informe um número inteiro: ");
	scanf("%d", &num);
	
	if(num%2 == 0) {
		printf("%d é par.\n", num);
	} else {
		printf("%d é ímpar.\n",num);
	}

	return 0;
}

/*Faça um programa que leia um número inteiro e verifique se esse número é par ou ímpar.*/
