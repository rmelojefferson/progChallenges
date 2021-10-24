#include <stdio.h>
#include <stdlib.h>

int main() {
	int numArr[10], i, maior = 0, menor = 999999;

	for(i = 0; i < 10; i++) {
		do {
			printf("Informe o %dº número maior que 0: ", i + 1);
			scanf("%d", &numArr[i]);
		} while(numArr[i] <= 0);
		if(numArr[i] > maior) {
			maior = numArr[i];
		}
		if(numArr[i] < menor) {
			menor = numArr[i];
		}
	}
	printf("\nO maior número do vetor é: %d\nO menor número do vetor é: %d\n\n", maior, menor);
	return 0;
}

/*Faça um programa que receba do usuário um vetor X com 10 posições. Em seguida deverão ser impressos o maior e o menor elemento desse vetor*/
