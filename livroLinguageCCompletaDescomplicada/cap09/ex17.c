#include <stdio.h>
#include <stdlib.h>

float serieS(int n) {
	int i;
	float s = 0;

	for(i = 1; i <= n; i++) {
		s += ((i*i)+1.0)/(i+3.0);
	}

	return s;
}

int main() {
	float num;

	printf("Informe um número para a sequência S: ");
	scanf("%f", &num);

	printf("\nS = %.2f\n\n", serieS(num));
	return 0;
}

/*Faça uma função que receba um inteiro N como parâmetro. Calcule e retorne o resultado da seguinte série S:
 *	
 * 	S = (2/4) + (5/5) + (10/6) + ... + (N² + 1) / (N + 3)*/
