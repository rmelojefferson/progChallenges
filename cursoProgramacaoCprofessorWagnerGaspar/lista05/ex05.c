#include <stdio.h>
#include <stdlib.h>


void cpy(char a[], char b[]) {
	int i = 0;

	while(a[i] != '\0') {
		b[i] = a[i];
		i++;
	}
	b[i] = '\0';
}

int main() {
	char a[50], b[50];

	printf("Informe um palvra/frase: ");
	scanf("%s", a);

	cpy(a, b);

	printf("a: %s\tb: %s\n", a, b);
	return 0;
}

/*Implemente a função strcpy (char *destino, char *origem) usando ponteiros.*/
