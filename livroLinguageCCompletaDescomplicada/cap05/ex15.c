#include <stdio.h>
#include <stdlib.h>

int main() {
	float num, maior = 0, menor = 0;

	do {
		printf("Informe um número positivo(números negativos encerram o programa): ");
		scanf("%f", &num);

		if(num > maior) {
			maior = num;
		}
		if(num < menor) {
			menor = num;
		}
	} while(num >= 0);

	printf("\n\nO maior número informado foi: %.2f\nO menor número informado foi: %.2f\n\n", maior, menor);
	
	return 0;
}

/*Elabore um programa que faça a leitura de vários números inteiros até que se digite um número negativo. O programa tem de retornar o maior e o menor número lido.*/
