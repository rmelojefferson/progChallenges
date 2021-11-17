#include <stdio.h>
#include <stdlib.h>

float forCelsius(float f) {
	float c;

	c = (f-32.0)*(5.0/9.0);

	return c;
}

int main() {
	float f;
	printf("Informe a temperatura em Fahrenheit: ");
	scanf("%f", &f);

	printf("%2.fºF em Celsius: %.2f\n", f, forCelsius(f));
	return 0;
}

/*Escreva uma função que receba por parâmetro uma temperatura em graus Fahrenheit e a retorne convertida em graus Celsius. A fórmula de conversão é: C = (F-32.0)*(5.0/9.0), sendo F a temperatura em Fahrenheit a C a temperatura em Celsius.*/
