#include <stdio.h>
#include <stdlib.h>

int main(){
	int num,complemento;

	printf("Infome um número: ");
	scanf("%d",&num);

	complemento = ~num;

	printf("O complemento bit a bit de %d é %d\n",num,complemento);
	return 0;
}

/*Escreva um programa que leia um número inteiro e mostre o seu complemento bit a bit.*/
