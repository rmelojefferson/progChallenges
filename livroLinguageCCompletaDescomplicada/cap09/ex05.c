#include <stdio.h>
#include <stdlib.h>

float volEsfera(float r) {
	float v;

	v = (4*3.141592*(r*r*r))/3;
	return v;
}


int main() {
	float r;

	printf("Informe o raio da esfera: ");
	scanf("%f", &r);

	printf("\nO volume da esfera é: %.2f.\n\n", volEsfera(r));

	return 0;
}

/*Escreva uma função para o cálculo do volume de uma esfera
 * 	V = 4/3pi*r³,
 * 	em que pi = 3.141592 valor do raio r deve ser passado por parâmetro*/
