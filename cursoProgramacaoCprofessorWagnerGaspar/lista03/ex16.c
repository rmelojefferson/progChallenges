#include <stdio.h>

int main() {
	int num = 1, i = 1;
	
	do {
		if(num % i == 0) {
			i ++;
		} else {
			num++;
			i = 1;
		}
	} while (i <= 10);
	printf("\nO número %d é divisível por todos os números entre 1 e 10\n\n", num);

	return 0;
}
/*Faça um programa para encontrar o menor número inteiro que seja divisível por todos os números inteiros entre 1 e 10.*/
