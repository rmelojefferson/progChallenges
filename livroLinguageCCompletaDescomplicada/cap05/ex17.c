#include <stdio.h>

int main() {
	int num, i, brokeLine, printNumber = 0;

	printf("Informe um número inteiro positivo: ");
	scanf("%d", &num);

	for(brokeLine = 1; brokeLine <= num; brokeLine++) {
		for(i = 1; i <= brokeLine; i++) {
			printNumber += 1;
			if(printNumber < 10) {
				printf("00%d ", printNumber);
			} else if(printNumber < 100) {
				printf("0%d ", printNumber);
			} else {
				printf("%d ", printNumber);
			}
		}
		printf("\n");
	}
	return 0;
}

/*Escreva um programa que leia um número inteiro positivo N e em seguida imprima N linhas do chama triângulo de floyd:

 1
 2 3
 4 5 6
 7 8 9 10
 11 12 13 14...*/
