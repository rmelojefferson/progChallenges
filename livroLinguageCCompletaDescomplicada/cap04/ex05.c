#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	float num, aux;

	printf("Informe um número inteiro: ");
	scanf("%f", &num);

	if(num > 0) {
		aux = num*num;
		printf("%.2f ao quadrado: %.2f\n", num, aux);

		aux = sqrt(num);
		printf("A raiz quadrada de %.2f: %.2f\n", num, aux);
	}
	return 0;
}

/*Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
 	- O número digitado ao quadrado.
 	- A raiz quadrada do número digitado.*/
