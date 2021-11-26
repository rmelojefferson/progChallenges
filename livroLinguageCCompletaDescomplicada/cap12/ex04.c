#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void file_verify(FILE *fl) {
	if(fl == NULL) {
		fputs("\nErro ao abrir o arquivo\n\n", stderr);
		exit(1);
	}
}

int word_search(char wd[], FILE *fl) {
	int l, i = 0, length, count = 0;
	
	length = strlen(wd);

	while((l = tolower(fgetc(fl))) != EOF) {
		if(l == tolower(wd[i])) {
			if(i == length - 1) {
				count++;;
			}
			i++;
		} else {
			i = 0;
		}
	}
	return count;
}

int main () {
	char word[50], fileName[50];
	FILE *file;
	
	printf("Informe o nome do arquivo (com extensão): ");
	scanf("%50[^\n]", fileName);
	getchar();

	file = fopen(fileName, "r");
	file_verify(file);

	printf("Informe a palavra que deseja procurar em \"%s\": ", fileName);
	scanf("%50[^\n]", word);

	printf("\nO termo \"%s\" aparece %d vezes no arquivo \"%s\"\n\n", word, word_search(word, file), fileName);

	fclose(file);

	return 0;
}

/*Elabore  um programa no qual o usuário informe o nome de um arquivo texto e uma palavra, e o programa informe o número de vezes que aquela palavra aparece dentro do arquivo.*/
