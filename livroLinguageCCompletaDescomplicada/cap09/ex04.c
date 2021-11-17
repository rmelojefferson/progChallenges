#include <stdio.h>
#include <stdlib.h>

float volCilindro(float a, float r) {
	float c;
	c = 3.141592*(r*r)*a;
	return c;
}

int main() {
	float a, r;

	printf("Informe a altura do cilindro: ");
	scanf("%f", &a);

	printf("Informe o raio do cilindro: ");
	scanf("%f", &r);

	printf("\nO volume do cilindro é: %.2f\n\n", volCilindro(a, r));
	return 0;
}

/*Escreva uma função que receba por parâmetro a altura e o raio de um cilindro circular e retorne o volume desse cilindro. O volume de um cilindro circular é calculado por meio das seguinte fórmula:
 * 	V = pi * raio² * altura, 
 * 	em que pi = 3.141592*/
