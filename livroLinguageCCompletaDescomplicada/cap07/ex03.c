#include <stdio.h>
#include <stdlib.h>

int main() {
	char frase[50];
	int i, cont = 0;

	printf("Informe uma palavra/frase: ");
	fgets(frase, 50, stdin);
	
	for(i = 0; i < 50; i++) {
		if(frase[i] == '\0') {
			cont--;
			break;
		} else {
			cont++;
		}
	}

	printf("Quantidade de caracteres: %d\n", cont);

	return 0;
}

/*Sem usar a função strlen(), fala um programa que leia uma string e imprima quantos caracteres ela possui.*/
