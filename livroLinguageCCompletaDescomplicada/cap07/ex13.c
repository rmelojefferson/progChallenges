#include <stdio.h>
#include <stdlib.h>

int main() {
	char str[100] = "\0";
	int i, j;

	printf("Informe um string: ");
	scanf("%100[^\n]", str);

	do {
		printf("Informe o 1º número inteiro não negativo: ");
		scanf("%d", &i);
	} while(i < 0);
	
	do {
		printf("Informe o 2º número inteiro não negativo: ");
		scanf("%d", &j);
	} while(i < 0);

	printf("\nCaracteres contidos entre %d e %d da string informada:\n", i, j);
	for(; i <= j; i++) {
		printf("%c", str[i]);
	}
	printf("\n\n");

	return 0;
}

/*Escreva um programa que recebe uma string S e dois valores inteiros não negativos i e j. Em seguida, imprima os caracteres contidos no segmento que vai de i a j da string S.*/
