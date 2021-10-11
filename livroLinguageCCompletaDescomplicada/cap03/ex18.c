#include <stdio.h>
#include <stdlib.h>

int main(){
	int num1,num2,left,right;

	printf("Informe o primeiro número: ");
	scanf("%d",&num1);

	printf("Informe o segundo número: ");
	scanf("%d",&num2);

	left = num1 << num2;
	right = num1 >> num2;

	printf("Resultado de %d deslocado %dx para esquerda: %d\nResultado de %d deslocado %dx para direita: %d\n",num1,num2,left,num1,num2,right);
	return 0;
}

/*Elabore um programa que leia dois números inteiros e exiba o deslocamento, à esquerda e à direita, do primeiro pelo segundo.*/
