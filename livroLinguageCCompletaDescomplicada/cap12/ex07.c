#include <stdio.h>
#include <stdlib.h>

void std_clean() {
	int aux;

	while(aux != '\n' && aux != EOF) {
		aux = getchar();
	}
}

void int_verify(int aux, int num) {
	if(aux == EOF) {
		fputs("\n\nPrograma encerrado pelo usuário\n\n", stderr);
		exit(1);
	} else if(aux == 0 || num < 0) {
		fputs("\nDado inválido...\n\n", stderr);
		std_clean();
	}
}

int main() {
	FILE *file;
	file = fopen("contacts.txt", "a+");

	if(file == NULL) {
		fputs("\n\nErro ao abrir o arquivo\n\n", stderr);
		exit(1);
	}
	
	char name[50];
	int tel, aux;

	do {
		printf("\nInforme o nome do novo contato: ");
		aux = scanf("%50[^\n]", name);
	
		if(aux == EOF) {
			fputs("\n\nPrograma encerrado pelo usuário\n\n", stderr);
			exit(1);
		}

		getchar();

		for(;;) {
			printf("\nInforme o telefone ou 0 para sair: ");
			aux = scanf("%d", &tel);

			if(aux == 0 || aux == EOF || tel < 0) {
				int_verify(aux, tel);
			} else {
				getchar();
				break;
			}
		}
		if(tel != 0) {
			fprintf(file,"%s %d\n", name, tel);
		}
	} while(tel != 0);
	
	printf("\nPrograma encerrado pelo usuário\n\n");

	fclose(file);

	return 0;
}

/*Faça um programa que permita que o usuário entre com diversos nomes e telefone para cadastro. Crie um arquivo com essas informações, uma por linha. O usuário finaliza a entrada com o valor 0 para o telefone.*/
