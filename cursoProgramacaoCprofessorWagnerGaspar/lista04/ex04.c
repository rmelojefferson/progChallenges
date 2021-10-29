#include <stdio.h>
#include <stdlib.h>

int main() {
	float vet_val[10], comissao = 0;
	int vet_quant[10], mais_vendido = 0, i;

	for(i = 0; i < 10; i++) {
		do {
			printf("Informe o valor do %dº produto(Troque a vírgula por ponto): R$", i + 1);
			scanf("%f", &vet_val[i]);
		} while(vet_val[i] <= 0.0);

		printf("Informe a quantidade vendida do %dº produto: ", i + 1);
		scanf("%d", &vet_quant[i]);
	}

	for(i = 0; i < 10; i++) {
		printf("\nO %dº produto teve %d venda(s)\nValor unitário: R$%.2f\nValor total da venda: R$%.2f\n", i + 1, vet_quant[i], vet_val[i], vet_val[i] * vet_quant[i]);

		comissao += vet_val[i] * vet_quant[i];

		if(vet_quant[i] > mais_vendido) {
			mais_vendido = vet_quant[i];
		}
	}

	for(i = 0; i < 10; i++) {
		if(vet_quant[i] == mais_vendido) {
			printf("\nPosição do produto mais vendido: %dº\nQuantidade vendida: %d", i + 1, vet_quant[i]);
		}
	}
	printf("\n\nTotal das vendas: R$%.2f\nComissão do vendedor R$%.2f\n\n", comissao, comissao * 0.05);

	return 0;
}

/*Uma pequena loja de artesanato possui apenas um vendedor e comercializa 10 tipos de objetos diferentes. O vendedor recebe um salário de R$1100,00 acrescido de 5% do valor total de suas vendas. O valor unitário dos objetos deve ser informado e armazenado em um vetor; a quantidade vendida de cada objeto deve ficar em outro vetor, mas na mesma posição. Crie um programa que receba os preços e as quantidades vendidas, armazenando-os em seus respectivos vetores. Depois,determine e mostre:
a) A quantidade vendida, valor unitário e valor total de cada objeto. Ao final, deverão ser mostrados
o valor total das vendas e o valor da comissão que será paga ao vendedor.
b) O valor do objeto mais vendido e sua posição no vetor (em caso de empates mostre todos
empatados).*/
