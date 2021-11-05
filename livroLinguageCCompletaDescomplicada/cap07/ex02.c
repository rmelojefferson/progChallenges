#include <stdio.h>
#include <stdlib.h>

int main() {
	char palavra[10];
	int i;

	printf("Informe uma palavra: ");
	fgets(palavra, 10, stdin);

	for(i = 0; i < 4; i++) {
		printf("%c",palavra[i]);
	}
	printf("\n");

	return 0;
}

/*Faça um programa que leia uma string e imprima as quatro primeiras letras dela*/
