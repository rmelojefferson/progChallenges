#include <stdio.h>
#include <stdlib.h>

int main(){
	int num1,num2,ou,e,exc;
	
	printf("Informe o primeiro número: ");
	scanf("%d",&num1);

	printf("Informe o segundo número: ");
	scanf("%d",&num2);

	exc = num1^num2;
	ou = num1|num2;
	e = num1&num2;

	printf("Resultado entre os número informados:\nOu exclusivo = %d\nOu bit a bit = %d\nE bit a bit = %d\n",exc,ou,e);

	return 0;
}

/*Elabore um programa que leia dois números inteiros e exiba o resultado das operações de "ou exclusivo", "ou bit a bit" e "e bit a bit" entre eles.*/
