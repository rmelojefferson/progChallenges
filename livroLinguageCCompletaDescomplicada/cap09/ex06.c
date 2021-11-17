#include <stdio.h>
#include <stdlib.h>

float imc(float p, float a) {
	float i;

	i = p/(a*a);
	return i;
}

int main() {
	float peso, altura;

	printf("Informe o seu peso (em quilos): ");
	scanf("%f", &peso);

	printf("Informe a sua altura (Troque a vírgula por ponto): ");
	scanf("%f", &altura);

	printf("Seu IMC: %.2f\n", imc(peso, altura));
	return 0;
}

/*Escreva uma função que receba o peso(quilos) e a altura(metros) de uma pessoa. Calcule e retorn o IMC(Índice de Massa Corporal) dessa pesso:
 * IMC = peso / (altura*altura)*/
