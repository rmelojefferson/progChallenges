#include <stdio.h>
#include <stdlib.h>

int main() {
	unsigned short i;
	float num[5], media = 0;

	for(i = 0; i < 5; i++) {
		printf("Informe o %dº número: ", i + 1);
		scanf("%f", &num[i]);
		media += num[i];
	}
	media /= 5.0;
	printf("Média = %.2f\n", media);
	return 0;
}

/*Faça um programa que leia cinco valores e os armazene em um vetor. Em seguida, mostre todos os valores lidos juntamente com a média dos valores.*/
