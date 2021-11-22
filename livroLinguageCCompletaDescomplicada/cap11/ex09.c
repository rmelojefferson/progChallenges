#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverte_frase(char str[]) {
	int i, aux, fim, tam = strlen(str);

	fim = tam - 1;

	for(i = 0; i < tam/2; i++) {
		aux = str[i];
		str[i] = str[fim];
		str[fim] = aux;
		fim--;
	}
}


int main() {
	char frase[50] = "Ola. bom dia!";
	
	inverte_frase(frase);

	printf("%s\n", frase);

	return 0;
}

/*Crie uma função que receba uma string e retorne o ponteiro para essa string invertida*/
