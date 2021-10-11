#include <stdio.h>
#include <stdlib.h>

int main(){
	float real,dolar,cotacao;
	printf("Informe o valor em reais (Usar ponto no lugar da vírgula): R$");
	scanf("%f",&real);

	printf("Informe a cotação atual do dólar (Usar ponto no lugar da vírgula): US$");
	scanf("%f",&dolar);

	cotacao = real/dolar;
	printf("Valor da cotação: US$%f\n",cotacao);

	return 0;
}

/*Faça um programa que leia um valor em reais e a cotação do dólar. Em seguida, imprima o valor correspondente em dólares.*/
