#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, num, maior = -1000000, menor = 1000000;

	for(i = 0; i < 10; i++) {
		printf("Informe o %dº número: ", i+1);
		scanf("%d", &num);
		if(num > maior) {
			maior = num;
		}
		if(num < menor) {
			menor = num;
		}
	}
	printf("\nO maior número informado: %d\nO menor número informado: %d\n\n", maior, menor);
	return 0;
}

/*Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor lido.*/
