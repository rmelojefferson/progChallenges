#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char str[100];
	int i;

	printf("Informe a frase para ser criptografada pelo código de César:\n\n");
	scanf("%100[^\n]", str);

	for(i = 0 ; i < strlen(str); i++) {
		if(str[i] != ' ') {
			str[i] += 3;
		}
	}

	printf("\nSeu código de César:\n%s\n\n", str);
	return 0;
}

/*O código de César é uma das técnicas de criptografia mais simples e conhecidas. É um tipo de substituição no qual cada letra do texto é substituída por outra, que se apresenta n posições após ela no alfabeto. Por exemplo, com uma troca de três posições, a letra A seria substituída por D, B se tornaria E e assim por diante. Escreva um programa que faça uso desse código de César para três posições, entre com uma string e imprima a string codificada. Exemplo:

String:  a ligeira raposa marrom saltou sobre o cachorro cansado.
Nova string: d oljhlud udsrvd pduurp vdowrx vreuh r fdfkruur fdqvdgr*/
