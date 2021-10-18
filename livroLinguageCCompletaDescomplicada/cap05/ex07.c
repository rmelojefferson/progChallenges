#include <stdio.h>
#include <stdlib.h>

int main() {
	int num, i, total;

	for(i = 1; i <= 10; i++) {
		printf("Informe o %dº número para soma: ", i);
		scanf("%d", &num);
		total += num;
	}
	printf("Total da soma entre os números informados: %d\n", total);
	return 0;
}

/*Elabore um programa que peça ao usuário para digitar 10 valores. Some esses valores e apresente o resultado na tela.*/
