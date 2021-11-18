#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b, maior;
	
	printf("Informe um número inteiro: ");
	scanf("%d", &a);

	printf("Informe outro número inteiro: ");
	scanf("%d", &b);

	if(&a > &b) {
		printf("Maior endereço informado:\nEndereço: %p\tNúmero: %d\n\n", &a, a);
		printf("Menor endereço informado:\nEndereço: %p\tNúmero: %d\n\n", &b, b);
	} else {
		printf("Maior endereço informado:\nEndereço: %p\tNúmero: %d\n\n", &b, b);
		printf("Menor endereço informado:\nEndereço: %p\tNúmero: %d\n\n", &a, a);
	}

	return 0;
}

/*Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e exiba o maior endereço*/
