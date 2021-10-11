#include <stdio.h>
#include <stdlib.h>

int main(){
	int num,ant,suc;
	printf("Informe um número inteiro: ");
	scanf("%d",&num);
	ant = num - 1;
	suc = num + 1;
	printf("O antecessor de %d é %d e o sucessor é %d\n",num,ant,suc);
	return 0;
}

/*Faça um programa que leia um número inteiro e retorne seu antecessor e o seu sucessor.*/
