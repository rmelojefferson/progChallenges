#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float hipo,catA,catB;

	printf("Informe o valor do cateto A: ");
	scanf("%f",&catA);

	printf("Informe o valor do cateto B: ");
	scanf("%f",&catB);

	hipo = sqrt((catA*catA)+(catB*catB));

	printf("O valor da hipotenusa é: %f\n",hipo);

	return 0;
}

/*Sejam a e b os catetos de um triângulo cuja hipotenusa h é obtida pela equição: h= raiz de a²+b². Faça um programa que leia os valores de a e b, e calcule o valor da hipotenusa através da fórmula dada. imprima o resultado.*/
