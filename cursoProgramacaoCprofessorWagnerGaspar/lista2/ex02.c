#include <stdio.h>
#include <stdlib.h>

int main() {
	int num, positivos = 0, negativos = 0;

	printf ("Informe um número inteiro positivo ou negativo: ");
	scanf("%d", &num);

	if(num > 0) {
		positivos++;
	} else {
		negativos++;
	}
	
	printf ("Informe um número inteiro positivo ou negativo: ");
	scanf("%d", &num);

	if(num > 0) {
		positivos++;
	} else {
		negativos++;
	}
	printf ("Informe um número inteiro positivo ou negativo: ");
	scanf("%d", &num);

	if(num > 0) {
		positivos++;
	} else {
		negativos++;
	}
	
	printf ("Informe um número inteiro positivo ou negativo: ");
	scanf("%d", &num);

	if(num > 0) {
		positivos++;
	} else {
		negativos++;
	}
	
	printf ("Informe um número inteiro positivo ou negativo: ");
	scanf("%d", &num);

	if(num > 0) {
		positivos++;
	} else {
		negativos++;
	}
	
	printf("Números positivos: %d\nNúmeros negativos: %d\n", positivos, negativos);
	
	return 0;
}

/*Escreva um programa em C que lê 5 números inteiros, um por vez. Conte quantos destes valores são negativos e quantos são positivos. Ao final, imprima na tela a quantidade de números negativos e positivos.*/
