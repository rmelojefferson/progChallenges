#include <stdio.h>
#include <stdlib.h>

int main() {
	int num, media, i;

	for(i = 0; i < 10; i++) {
		printf("Informe o %dº número inteiro para o cálculo da média de 10: ", i+1);
		scanf("%d", &num);
		media += num;
	}
	media /= i;
	printf("\n\nMédia: %d\n\n", media);
	return 0;
}

/*Faça um programa que leia 10 inteiros e imprimasua média.*/
