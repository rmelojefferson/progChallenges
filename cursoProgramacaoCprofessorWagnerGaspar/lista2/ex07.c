#include <stdio.h>
#include <stdlib.h>

int main() {
	char vowel;

	printf("Informe um caractere para verificação de vogal: ");
	scanf("%c", &vowel);

	if(vowel == 'a' || vowel == 'A' || vowel == 'e' || vowel == 'E' || vowel == 'i' || 
		vowel == 'I' || vowel == 'o' || vowel == 'O' || vowel == 'u' || vowel == 'U') {
		printf("\"%c\" é uma vogal.\n", vowel);
	} else {
		printf("\"%c\" não é uma vogal.\n", vowel);
	}
	return 0;
}

/*Faça um programa que peça ao usuário um caracter e diga se é uma vogal ou não.*/
