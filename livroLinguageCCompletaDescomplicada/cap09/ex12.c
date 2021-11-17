#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int fatorPrimo(int n) {
	int fator = 0, aux = 0, i, j;

	for(i = n; i >= 1; i--) {
		for(j = 1; j <= n; j++) {
			if(i % j == 0) {
				aux++;
			}
		}
		if(aux == 2) {
			fator = i;
			return fator;
		}
		aux = 0;
	}
}

int main() {
	int num;

	printf("Informe um número: ");
	scanf("%d", &num);
	
	if(num == 0 || num == 1) {
		printf("\nNão há fator primo neste número\n\n");
	} else {
		printf("\n%d é o maior fator primo de %d\n\n", fatorPrimo(num), num);
	}

	return 0;
}

/*Escreva uma função que receba um número inteiro positivo e retorne o maior fator primo desse número.*/
