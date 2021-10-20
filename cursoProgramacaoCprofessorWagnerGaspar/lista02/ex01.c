#include <stdio.h>
#include <stdlib.h>

int main() {
	int num1, num2, num3;

	printf("Informe três números inteiro: ");
	scanf("%d%d%d", &num1, &num2, &num3);

	if(num1 == num2 && num1 == num3) {
		printf("Os três números são iguais\n");
	} else if(num1 > num2 && num1 > num3) {
		printf("O número %d é o maior dos números informados\n", num1);
		if(num2 > num3) {
			printf("O número %d é o menor dos números informados\n", num3);
		} else {
			printf("O número %d é o menor dos números informados\n", num2);
		}
	} else if(num2 > num1 && num2 > num3) {
		printf("O número %d é o maior dos números informados\n", num2);
		if(num1 > num3) {
			printf("O número %d é o menor dos números informados\n", num3);
		} else {
			printf("O número %d é o menor dos números informados\n", num1);
		}
	}else {
		printf("O número %d é o maior dos números informados\n", num3);
		if(num1 > num2) {
			printf("O número %d é o menor dos números informados\n", num2);
		} else {
			printf("O número %d é o menor dos números informados\n", num1);
		}
	}
	return 0;
}

/*Escreva um programa em C que leia três valores e apresente qual é o maior e qual é o menor*/
