#include <stdio.h>
#include <stdlib.h>

int main(){
	int num1,num2,num3,soma;
	printf("Informe o primeiro número(inteiro): ");
	scanf("%d",&num1);
	
	printf("Informe o segundo número(inteiro): ");
	scanf("%d",&num2);

	printf("Informe o terceiro número(inteiro): ");
	scanf("%d",&num3);

	soma = num1+num2+num3;

	printf("%d+%d+%d = %d\n",num1,num2,num3,soma);
	return 0;
}

/*Faça um programa que leia três valores inteiros e mostre sua soma*/
