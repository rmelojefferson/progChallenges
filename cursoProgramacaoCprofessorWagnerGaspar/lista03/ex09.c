#include <stdio.h>

int main() {
	int num, i, total = 0;

	do {
		printf("Informe um número inteiro maior que zero: ");
		scanf("%d", &num);
	} while (num <= 0);

	printf("1");
	for(i = 2; i <= num; i++) {
		total += i;
		printf(" + %d", i);
	}
	printf(" = %d\n", total+1);
	return 0;
}

/*Faça um programa que calcule o valor de A, dado por: A = 1 + 2 + 3 + 4 + ... + n, onde n é um número inteiro, maior que zero informado pelo usuário.*/
