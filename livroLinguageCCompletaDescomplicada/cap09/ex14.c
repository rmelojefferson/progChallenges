#include <stdio.h>
#include <stdlib.h>

int fatorial(int n) {
	int i, fat = 1;

	for(i = 1; i <= n; i++) {
		fat *= i;
	}
	return fat;
}

int main() {
	int num;

	do {
		printf("Informe um número: ");
		scanf("%d", &num);
	} while(num < 0);

	printf("\n%d! = %d\n\n", num, fatorial(num));
	return 0;
}

/*Escreva uma função que receva um número inteiro positivo n. Calcule e retorne o seu fatorial n! = (n-1)*(n-2)*/
