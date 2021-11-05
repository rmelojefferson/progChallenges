#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char str[100];
	int i;

	printf("Informe a palavra/frase para conversão: ");
	scanf("%100[^\n]", str);

	for(i = 0; i < strlen(str); i++) {
		if(str[i] >= 97 && str[i] <= 122) {
			str[i] -= 32;
		}
	}

	printf("\n%s\n\n", str);

	return 0;
}

/*Escreva um programa que leia uma string do teclado e converta todos os seus caracteres em maiúscula. Dica: Subtraia 32 dos caracteres cujo código ASCII está entre 97 e 122.*/
