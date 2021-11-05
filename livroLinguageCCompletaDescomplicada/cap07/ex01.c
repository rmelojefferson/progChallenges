#include <stdio.h>
#include <stdlib.h>

int main() {
	char frase[10];

	printf("Informe uma palavra: ");
	scanf("%10[^\n]", frase);

	printf("%s\n", frase);
	return 0;
}

/*Faça um programa que leia uma string e a imprima na tela.*/
