#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char produto[50];
	float valor;

	printf("Informe o nome do produto: ");
	scanf("%50[^\n]", produto);

	printf("Informe o valor do produto (Troque a vírgula por ponto): R$");
	scanf("%f", &valor);

	printf("\nProduto: %s\nValor total: R$%.2f\nValor do desconto para pagamento à vista: R$%.2f\nValor total para pagamento à vista: R$%.2f\n\n", produto, valor, valor*0.1, valor-valor*0.1);
/*Escreva um programa que leia uma string do teclado e converta todos os seus caracteres em maiúscula. Dica: Subtraia 32 dos caracteres cujo código ASCII está entre 97 e 122.*/
	return 0;
}

/*Escreva um programa que leia o nome e o valor de determinada mercadoria de uma loja. Sabendo que o desconto para pagamento à vista é de 10% sobre o valor total, calcule o valor a ser pago à vista. Escreva o nome da mercadoria, o valor total, o valor do desconto e o valor a ser pago à vista.*/
