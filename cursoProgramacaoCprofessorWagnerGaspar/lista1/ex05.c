#include <stdio.h>
#include <stdlib.h>

int main(){
	int diasTrabalhados;
	float imposto, aReceber, total;

	printf("Informe o número de dias trabalhados: ");
	scanf("%d", &diasTrabalhados);

	total = diasTrabalhados*45;
	imposto = total*8/100;
	aReceber = total-imposto;

	printf("Valor líquido a receber: R$%.2f\nValor retido para impostos (8%): R$%.2f\n",aReceber,imposto);

	return 0;
}

/*5) Uma empresa contrata um encanador a R$ 45,00 por dia. Faça um programa que solicite o
número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga,
sabendo que são descontados 8% para imposto de renda.*/
