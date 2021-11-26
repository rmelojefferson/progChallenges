#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *file;
	file = fopen("lista.txt", "r");
	
	if(file == NULL) {
		fputs("\nErro ao tentar abrir o arquivo...\n\n", stderr);
		exit(1);
	}

	char prod[25];
	int quant;
	float value, total = 0;

	while(fscanf(file, "%s%d%f", prod, &quant, &value) != -1) {
		total += quant * value;
		if(value < 10.00) {
			printf("Quantidade: %2d R$0%.2f Produto: %s\n", quant, value, prod);
		} else {
			printf("Quantidade: %2d R$%.2f Produto: %s\n", quant, value, prod);
		}
	}
	
	printf("\nTotal: R$%.2f\n\n", total);

	fclose(file);

	return 0;
}

/*Faça um programa que leia um arquivo texto contendo uma lista de compras. Cada linha do arquivo possui nome, quantidade e valor unitário do produto. O programa então exibe o total da compra.*/
