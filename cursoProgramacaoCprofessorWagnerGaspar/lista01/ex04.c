#include <stdio.h>
#include <stdlib.h>

int main(){
	int pessoas;
	float total, valor, gorjeta;

	printf("Informe o valor total da conta do restaurante (Use ponto no lugar da vírgula): R$");
	scanf("%f", &valor);

	printf("Informe quantos por cento irão pagar de gorjeta: ");
	scanf("%f", &gorjeta);

	printf("Quantas pessoar irão pagar a conta? ");
	scanf("%d", &pessoas);

	total = (valor+(valor*(gorjeta/100)))/pessoas;

	printf("Cada um irá pagar R$%.2f\n",total);

	return 0;
}

/*4) Escreva um programa que leia um valor de despesa de restaurante, o valor da gorjeta (em
porcentagem) e o número de pessoas para dividir a conta. Imprima o valor que cada um deve pagar.
Assuma que a conta será dividida igualmente.*/
