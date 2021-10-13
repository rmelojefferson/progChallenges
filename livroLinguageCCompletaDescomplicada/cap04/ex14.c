#include <stdio.h>
#include <stdlib.h>

int main() {
	int num;

	printf("Informe um número inteiro para verificar sua divisibilidade por 3 ou 5: ");
	scanf("%d", &num);

	if(num % 3 == 0 && num % 5 == 0) {
		printf("Esse número é divisível por 3 e por 5\n");
	} else {
		if(num % 3 == 0) {
			printf("Esse número é divisível por 3\n");
		} else if(num % 5 == 0) {
			printf("Esse número é divisível por 5\n");
		}else {
			printf("Esse número não é divisível por 3 e nem por 5\n");
		}
	}

	return 0;
}

/*Faça um programa para verificar se determinado número inteiro lido é divisível por 3 ou 5, mas não simultaneamente pelos dois.*/
