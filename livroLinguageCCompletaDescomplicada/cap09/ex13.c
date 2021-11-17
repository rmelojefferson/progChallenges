#include <stdio.h>
#include <stdlib.h>

int somatorio(int n) {
	int i, somatorio = 0;

	for(i = 1; i <= n; i++) {
		somatorio += i;
	}
	return somatorio;
}

int main() {
	int num; 

	do {
		printf("Informe um número: ");
		scanf("%d", &num);
	} while(num < 0);

	printf("\nO somatório de %d é %d.\n\n", num, somatorio(num));
	return 0;
}

/*Escreva uma função que receba um número inteiro positivo n. Calcule e retorne o somatório de 1 até n: 1 + 2 + 3 + 4...+n*/
