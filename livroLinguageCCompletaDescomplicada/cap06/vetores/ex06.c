#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, numArr[10];

	for(i = 0; i < 10; i++) {
		printf("Informe o %dº número: ", i + 1);
		scanf("%d", &numArr[i]);
	}
	
	printf("\nOs números pares informados: ");
	
	for(i = 0; i < 10; i++) {
		if(numArr[i] % 2 == 0) {
			printf("%d ", numArr[i]);
		}
	}
	
	printf("\n\n");

	return 0;
}

/*Escreva um programa que leia do teclado um vetor de 10 posições. Escreva na tela quantos valores pares foram armazenados nesse vetor*/
