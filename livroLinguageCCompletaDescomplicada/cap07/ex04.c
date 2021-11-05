#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char str[50], cpy[50];
	int i, tam = 0;

	printf("Informe uma palavra/frase: ");
	scanf("%50[^\n]", str);

	tam = strlen(str);
	
	for(i = 0; i < str[i] != '\0'; i++) {
		cpy[i] = str[tam - 1];
		tam--;
	}
	printf("%s\n", cpy);


	return 0;
}

/*Faça um programa que leia uma string e a imprima de trás para frente*/
