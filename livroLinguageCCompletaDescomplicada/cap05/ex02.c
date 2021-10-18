#include <stdio.h>
#include <stdlib.h>

int main() {
	int num;

	printf("informe um número para contagem: ");
	scanf("%d", &num);

	for(; num >= 0; num--) {
		printf("%d\n", num);
	}
	return 0;
}

/*Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem crescente*/
