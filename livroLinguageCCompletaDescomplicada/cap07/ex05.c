#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char str[50], aux = '\0';
	int i, tam;

	printf("String: ");
	scanf("%50[^\n]", str);

	tam = strlen(str);

	for(i = 0; i < strlen(str)/ 2; i++) {
		tam--;
		aux = str[tam];
		str[tam] = str[i];
		str[i] = aux;
	}

	printf("%s\n", str);
	return 0;
}

/*Faça um programa que leia uma string e a inverta. A string invertida deve ser armazenada na mesma variável. Em seguida, imprima a sting invertida.*/
