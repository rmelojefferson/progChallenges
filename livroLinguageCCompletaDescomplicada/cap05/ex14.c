#include <stdio.h>
#include <stdlib.h>

int main() {
	int num, i, a = 0, b = 1, c;

	printf("Informe um número inteiro positivo: ");
	scanf("%d", &num);
	
	printf("Os %d primeiros números da sequência de Fibonacci: 0");
	for(i = 1; i < num; i++) {
		c = a + b;
		printf(", %d",c);
		b = a;
		a = c;
	}
	printf(".\n");
	return 0;
}

/*Escreva um programa que leia um número inteiro, maior ou igual a zero, do usuário. Imprima o enésimo termo da sequência de Fibonacci. Essa sequência começa no termo de ordem zero, e, a partir do segundo termo, seu valor é dado pela soma dos dois termos anteriores. Alguns termos dessa sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34*/
