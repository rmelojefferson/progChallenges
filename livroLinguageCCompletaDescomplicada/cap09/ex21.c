#include <stdio.h>
#include <stdlib.h>

void separaReal(float *f, int *i) {
	*i = *f;
	*f = *f - *i;
}

int main() {
	float num1;
	int num2;

	printf("Informe um número real (troque a vígula por ponto): ");
	scanf("%f", &num1);

	separaReal(&num1, &num2);

	printf("\nParte inteira do número informado: %d\n", num2);
	printf("Parte fracionária do número informado: %f\n\n", num1);

	return 0;
}

/*Escreva uma função que, dado um número real passado como parâmetro, retorne a parte inteira e a parte fracionária desse número por referência*/
