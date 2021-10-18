#include <stdio.h>
#include <stdlib.h>

int main() {
	int num;

	printf("Informe um número inteiro para verificar sua divisibilidade por 2, 3 e 5: ");
	scanf("%d", &num);

	if(num % 2 == 0 && num % 3 == 0 && num % 5 == 0) {
		printf("O número informado é divisível por 2, 3 e 5.\n");
	} else if(num % 2 == 0 && num % 3 != 0 && num % 5 != 0) {
		printf("O número informado é divisível por 2.\n");
	} else if(num % 2 == 0 && num % 3 == 0 && num % 5 != 0) {
		printf("O número informado é divisível por 2 e 3.\n");
	} else if(num % 2 == 0 && num % 3 != 0 && num % 5 == 0) {
		printf("O número informado é divisível por 2 e 5.\n");
	} else if(num % 3 == 0 && num % 5 == 0) {
		printf("O número informado é divisível por 3 e 5.\n");
	} else if(num % 3 == 0 && num % 5 != 0) {
		printf("O número informado é divisível por 3.\n");
	} else if(num % 5 == 0) {
		printf("O número informado é divisível por  5.\n");
	} else {
		printf("O número informado não é divisível por 2, 3 ou 5.\n");
	}
		return 0;
}

/*Escreva um programa em C que leia um número e informe se ele é divisível por 2, por 3 ou por 5, ou se não é divisível por nenhum deles	- Acrescentado ao programa quais são os divisores para o número informado entre 2,3 e 5.*/
