#include <stdio.h>
#include <stdlib.h>

int main() {
	int count = 0, i, l;
	char fileName[50];
	FILE *file;

	printf("Informe o nome completo do arquivo (com extensão): ");
	scanf("%50[^\n]", fileName);

	file = fopen(fileName, "r");

	if(file == NULL) {
		fputs("\nErro ao abrir o arquivo\n\n", stderr);
		exit(1);
	}
	
	while((l = fgetc(file)) != EOF) {
		printf("%c", l);
		if(l == '\n') {
			count++;
		}
	}

	fclose(file);

	printf("\nO arquivo tem %d linhas.\n\n", count);
	
	return 0;
}

/*Escreva um programa uqe leia do usuário o nome de um arquivo de texto. Em seguida, mostre na tela quantas linhas esse arquivo possui.*/
