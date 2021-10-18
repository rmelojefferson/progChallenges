#include <stdio.h>
#include <stdlib.h>

int main() {
	int num, i;

	printf("Informe quantos números ímpares deseja saber a partir de 1: ");
	scanf("%d", &num);

	for(i = 1; i <= num*2; i += 2) {
		printf("%d\n", i);
	}
	return 0;
}

/*Faça um programa que leia um número inteiro N e depois imprima os N primeiros números naturais ímpares.*/
