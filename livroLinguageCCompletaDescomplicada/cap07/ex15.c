#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
	char str1[100], str2[100], aux, aux2;
	int i, j;

	printf("Informe a 1ª string: ");
	scanf("%100[^\n]", str1);

	getchar();

	printf("Informe a 2ª string: ");
	scanf("%100[^\n]", str2);
	

	for(i = 0; i < strlen(str1); i++) {
		str1[i] = tolower(str1[i]);
	}
	
	for(i = 0; i < strlen(str2); i++) {
		str2[i] = tolower(str2[i]);
	}

	for(i = 0; i < strlen(str1); i++) {
		for(j = i + 1; j < strlen(str1); j++) {
			if(str1[i] > str1[j]) {
				aux = str1[i];
				str1[i] = str1[j];
				str1[j] = aux;
			}
		}
	}
	for(i = 0; i < strlen(str2); i++) {
		for(j = i + 1; j < strlen(str2); j++) {
			if(str2[i] > str2[j]) {
				aux = str2[i];
				str2[i] = str2[j];
				str2[j] = aux;
			}
		}
	}
	
	printf("\n1ª string ordenada alfabeticamente: %s\n2ª string ordenada alfabeticamente: %s\n\n", str1, str2);


	return 0;
}

/*Escreva um programa que leia duas strings e as imprima em ordem alfabética, a ordem em que elas apareceriam em um dicionário*/
