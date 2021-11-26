#include <stdio.h>
#include <stdlib.h>

int vowels_count(char flName[]) {
	FILE *file;
	file = fopen(flName, "r");

	if(file == NULL) {
		fputs("\nErro ao abrir o arquivo...\n\n", stderr);
		exit(1);
	}
	
	char l;
	int count = 0;

	while((l = fgetc(file)) != -1) {
		if(l == 'a' || l == 'A' || l == 'e' || l == 'E' || l == 'i' || l == 'I' || l == 'o' || l == 'O' || l == 'u' || l == 'U') {
			count++;
		}
	}

	fclose(file);

	return count;
}		

int main() {
	char fileName[100];

	printf("Informe o nome do arquivo (com extensão) que deseja contar as vogais: ");
	scanf("%100[^\n]", fileName);

	printf("\nExistem %d vogais no arquivo \"%s\"\n\n", vowels_count(fileName), fileName);

	return 0;
}

/*Escreva uma função que receba como parâmetro o nome de um arquivo texto e retorne quantas vogais esse arquivo possui.*/
