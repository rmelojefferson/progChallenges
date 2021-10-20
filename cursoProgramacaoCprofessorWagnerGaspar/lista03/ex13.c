#include <stdio.h>

int main() {
	int num, i, primo = 0;

	do {
		printf("Informe um número inteiro maior que 2: ");
		scanf("%d", &num);
	} while (num < 2);

	for(i = 1; i <= num; i++) {
		if(num % i == 0) {
			primo++;
		}
	}

	if(primo == 2) {
		printf("O número %d é primo\n", num);
	} else {
		printf("O número %d não é primo\n", num);
	}
	return 0;
}

/*Faça um programa que peça ao usuário um número inteiro maior que 2 e diga se o número informado é primo ou não.*/
