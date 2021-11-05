#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char str[20], char_substituto;
	int i, cont = 0;

	printf("Informe uma palavra: ");
	scanf("%20[^\n' ']", str);

	for(i = 0; i < strlen(str); i++) {
		if(str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U') {
			cont++;
			str[i] = 'A';
		}
	}

	printf("Quantidade de vogais na palavra informada: %d\nPalavra com \'A\' no lugar das vogais: %s\n", cont, str);

	return 0;
}

/*Leia uma string do teclado e conte quantas vogais (a, e, i, o ,u) ela possui. Entre com um caractere (vogal ou consoante) e substitua todas as vogais da palavra dada por esse caractere. Ao final, imprima a nova string e o número de vogais que ela possui.*/
