#include <stdio.h>
#include <stdlib.h>

int main() {
	int vet[5], i;

	for(i = 0; i < 5; i++) {
		printf("Informe o %dº número: ", i+1);
		scanf("%d", (vet+i));
	}

	for(i = 0; i < 5; i++) {
		printf("O dobro de %d é %d.\n", vet[i], *(vet+i) * 2);
	}
	return 0;
}
				
/*Crie um programa que contenha um array de inteiros com cinco elementos. Utilizando apenas aritmética de ponteiros, leia esse array do teclado e imprima o dobro de cada valor lido.*/
