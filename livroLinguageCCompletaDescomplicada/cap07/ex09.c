#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char str1[100], str2[100], aux[100];
	int i, j = 0, k, cont = 0;
	
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
			cont++;
			for(k = 0; k < strlen(str2); k++) {
				aux[k] = '\0';
			}
		}

	}

	printf("\nA 2ª string está contida %d vez(es) na 1ª.\n\n", cont);

	return 0;
}

/*Construa um programa que leia duas strings do teclado. Imprima uma mensagem informando quantas vezes a segunda string lida está contida dentro da primeira*/
