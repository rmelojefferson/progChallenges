#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void upper_case(FILE *f1, FILE *f2) {
	int l;
	while((l = fgetc(f1)) != EOF) {
		fputc(toupper(l), f2);
	}
}

void file_verify(FILE *fp) {
	if(fp == NULL) {
		fputs("\nErro ao abrir o arquivo\n\n", stderr);
		exit(1);
	}
}

int main() {
	char fileName1[50], fileName2[50];
	FILE *file1, *file2;

	printf("Informe o nome do arquivo (com extensão) que será copiado: ");
	scanf("%50[^\n]", fileName1);
	getchar();
	
	file1 = fopen(fileName1, "r");
	file_verify(file1);

	printf("Informe o nome do arquivo (com extensão) onde será copiado em maiúscula: ");
	scanf("%50[^\n]", fileName2);
	
	file2 = fopen(fileName2, "w");
	file_verify(file2);

	upper_case(file1, file2);

	fclose(file1);
	fclose(file2);

	return 0;
}

/*Escreva um programa para converter o conteúdo de um arquivo texto em caracteres maiúsculos. O programa deverá ler do usuário o nome do arquivo a ser convertido e o nome do arquivo a ser salvo.*/
