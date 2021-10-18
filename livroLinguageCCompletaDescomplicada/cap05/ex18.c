#include <stdio.h>
#include <stdlib.h>

int main() {
	int num, i, primo;

	printf("Informe um número inteiro maior que 1 para ver se ele é primo: ");
	scanf("%d", &num);

	if(num <= 1) {
		return 0;
	}

	for(i = 1; i <= num; i++) {
		if(num % i == 0) {
			primo++;
		}
	}
	if(primo == 2) {
		printf("O número %d é primo.\n", num);
	} else {
		printf("O número %d não é primo.\n", num);
	}

	return 0;
}

/*Faça um programa que receba um número inteiro maior do que 1 e verifique se o número fornecido é primo ou não.*/
