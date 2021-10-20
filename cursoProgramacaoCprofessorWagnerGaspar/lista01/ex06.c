#include <stdio.h>
#include <stdlib.h>

int main(){
	float real, dolar = 5.3, conversao;

	printf("Informe o valor em reais para conversão: R$");
	scanf("%f", &real);

	conversao = real/dolar;

	printf("Conversão de R$%.2f em dólar: US$%.2f\n", real, conversao);

	return 0;
}

/*6) Crie um programa em C que permita fazer a conversão cambial entre Reais e Dólares. Considere
como taxa de câmbio US$1,0 = R$5,30. Leia um valor em Reais e mostre o correspondente em
Dólares.*/
