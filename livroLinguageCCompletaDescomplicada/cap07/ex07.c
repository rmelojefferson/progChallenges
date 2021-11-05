#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char str[20], aux[20];
	int i, tam;

	printf("Informe uma palavra: ");
	scanf("%20[^' '\n]", str);

	tam = strlen(str);


	for(i = 0; i < strlen(str); i++) {
		tam--;
		if(str[i] == str[tam]) {
			aux[i] = str[i];
		} else {
			break;
		}
	}

	if(strcmp(str, aux) == 0) {
		printf("\nEssa palavra é um palíndromo\n\n");
	} else {
		printf("\nEssa palavra não é um palíndromo\n\n");
	}
	return 0;
}

/*Faça um programa que leia uma string e imprima uma mensagem dizendo se ela é um palíndromo ou não. Um palíndromo é uma palavra que tem a propriedade de poder ser lida tanto da direita para a esquerda como da esquerda para a direita. Exemplos: ovo, arara, rever, asa, osso etc.*/
