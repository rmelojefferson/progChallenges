#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char str1[100], str2[100], aux[100];
	int i, j = 0;
	
	printf("Informe a 1ª string: ");
	scanf("%100[^\n]", str1);
	
	getchar();

	printf("Informe a 2ª string: ");
	scanf("%100[^\n]", str2);

	for(i = 0; i < strlen(str1); i++) {
		if(str2[j] != str1[i]) {
			j = 0;
		} else {
			aux[j] = str2[j];
			j++;
		}
		if(strcmp(aux, str2) == 0) {
			printf("\nA 2ª string está contida na 1ª\n\n");
			break;
		}

	}

	if(strcmp(aux, str2) != 0) {
		printf("\nA 2ª string não está contida na 1ª\n\n");
	}
	return 0;
}

/*Construa um programa que leia duas strings do teclado. Imprima uma mensagem informando se a segunda string lida está contida dentro da primeira.*/
