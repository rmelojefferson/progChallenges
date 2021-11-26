#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void std_clean() {
	int aux;

	while(aux != '\n' && aux != EOF) {
		aux = getchar();
	}
}

void number_verify(int aux, int num) {
	if(aux == EOF || num < 0) {
		fputs("\nPrograma encerrado pelo usuário\n\n", stderr);
		exit(1);
	} else if(aux == 0) {
		fputs("\nDado inválido...\n\n", stderr);
		std_clean();
	}
}

void save_file(int vet[], int length, int num) {
	FILE *file;

	file = fopen("binary_convert.txt", "a+");

	if(file == NULL) {
		fputs("\nErro ao abrir o arquivo\n\n", stderr);
		exit(1);
	}

	int i, aux, len;
	
	aux = length - 1;
	len = length;
	
	
	if(num == 0) {
		printf("\n\t0 = 0000");
		fprintf(file, "0 = 0000");
	} else {
		printf("\n\t%d = ", num);
		fprintf(file, "%d = ", num);

		for(i = 0; i < len; i++) {
		printf("%d ", vet[aux]);
		fprintf(file, "%d ", vet[aux]);
		aux--;
		}
	}
	printf("\n\n");
	fprintf(file, "\n");

	fclose(file);
}

void binary_convert(int num) {
	int *bNum, i = 0, n;
	
	n = num;

	if(num == 0) {
		save_file(bNum, i, n);
	} else {
		bNum = calloc(num, sizeof(int));
		while(num != 0) {
			bNum[i] = num % 2;
			num /= 2;
			i++;
		}
		save_file(bNum, i, n);
		free(bNum);
		bNum = NULL;
	}
}

int main() {
	int num, aux = 0;

	for(;;) {
		for(;;) {
			printf("Informe um número inteiro positivo: ");
			aux = scanf("%d", &num);

			if(aux == 0 || aux == EOF || num < 0) {
				number_verify(aux, num);
			} else {
				getchar();
				break;
			}
		}
		binary_convert(num);	
	}

	return 0;
}

/*Faça um programa que leia números positivos e os converta em binário. Cada número binário deverá ser salvo em uma linha de um arquivo texto. O programa termina quando o usuário digitar um número negativo.*/
