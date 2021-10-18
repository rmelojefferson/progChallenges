#include <stdio.h>
#include <stdlib.h>

int main() {
	int num, i, total;

	printf("Informe um número para saber a soma dos seus divisores: ");
	scanf("%d", &num);

	printf("A soma dos divisores do número %d é 1 ", num);

	for(i = 2; i < num; i++) {
		if(num % i == 0) {
			printf("+ %d ", i);
			total += i;
		}
	}
	printf("= %d\n", total+1);

	return 0;
}

/*Escreva um programa que leia um número inteiro e calcule a soma de todos os divisores desse número, com exceção dele próprio. Exemplo: A soma dos divisores do número 66 é 1 + 2 + 3 + 6 + 11 + 22 + 33 = 78*/
