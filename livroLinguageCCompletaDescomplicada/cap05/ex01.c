#include <stdio.h>
#include <stdlib.h>

int main() {
	int num, i;

	printf("informe um número para contagem: ");
	scanf("%d", &num);

	for(i = 0; i <= num; i++) {
		printf("%d\n", i);
	}
	return 0;
}

/*Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem crescente*/
