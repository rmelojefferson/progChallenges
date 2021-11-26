#include <stdio.h>
#include <stdlib.h>

void fileVerify(FILE *file) {
	if(file == NULL) {
		fputs("\nErro ao abrir o arquivo\n\n", stderr);
		exit(1);
	}
}

void fileName(char fileName[]) {
	printf("Informe o nome do primeiro arquivo (com extensão): ");
	scanf("%50[^\n]", fileName);
	getchar();
}

int main() {
	char fileName1[50], fileName2[50];
	FILE *file1, *file2, *file3;
	int l;

	fileName(fileName1);
	file1 = fopen(fileName1, "r");
	fileVerify(file1);

	fileName(fileName2);
	file2 = fopen(fileName2, "r");
	fileVerify(file2);

	file3 = fopen("file3.txt", "w");
	fileVerify(file3);
	
	while((l = fgetc(file1)) != EOF) {
		fputc(l, file3);
	}

	fclose(file1);

	fputc('\n', file3);
	
	while((l = fgetc(file2)) != EOF) {
		fputc(l, file3);
	}
	
	fclose(file2);
	fclose(file3);

	return 0;
}

/*Escreva um programa que leia do usuário os nomes de dois arquivos texto. Crie um terceiro arquivo texto com o conteúdo dos dois primeiros juntos(o conteúdo do primeiro seguido do conteúdo do segundo).*/
