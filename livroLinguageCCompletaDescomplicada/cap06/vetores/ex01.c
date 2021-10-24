#include <stdio.h>
#include <stdlib.h>

int main() {
	int num[6], i;

	for(i = 0; i < 6; i++) {
		printf("Informe o %dº número: ", i + 1);
		scanf("%d", &num[i]);
	}

	printf("Números informados: ");
	for(i = 0; i < 6; i++) {
		printf("%d ", num[i]);
	}
	printf("\n");
	return 0;
}

/*Crie um programa que leia do teclado seis valores inteiros e em seguida mostre na tela os valores lidos.*/
