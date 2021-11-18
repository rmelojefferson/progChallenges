#include <stdio.h>
#include <stdlib.h>

void trocaValor(float *a, float *b) {
	float c;
	c = *a;
	*a = *b;
	*b = c;
}


int main() {
	float a, b;

	printf("Informe um número real para a (troque a vírgula por ponto): ");
	scanf("%f", &a);
	
	printf("Informe um número real para b (troque a vírgula por ponto): ");
	scanf("%f", &b);

	printf("\nValor de a: %.2f\nValor de b: %.2f\n", a, b);

	trocaValor(&a, &b);

	printf("\nValor de a trocado: %.2f\nValor de b trocado: %.2f\n", a, b);

	return 0;
}

/*Escreva um procedimento que troca os valores dos parâmetros recebidos. Sua assinatura deve ser: void troca(float *a, float *b)*/
