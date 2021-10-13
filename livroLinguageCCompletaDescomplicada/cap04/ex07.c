#include <stdio.h>
#include <stdlib.h>

int main() {
	float valor;
	short int estado;

	printf("Informe o valor do produto: R$");
	scanf("%f", &valor);

	printf("Informe o número do estado destino\n1 - MG\n2 - SP\n3 - RJ\n4 - MS\n");
	scanf("%d", &estado);

	switch(estado) {
		case 1:
			valor += valor*7/100;
			printf("Valor final do produto com impostos para MG: R$%.2f\n", valor);
			break;
		case 2:
			valor += valor*12/100;
			printf("Valor final do produto com impostos para SP: R$%.2f\n", valor);
			break;
		case 3:
			valor += valor*15/100;
			printf("Valor final do produto com impostos para RJ: R$%.2f\n", valor);
			break;
		case 4:
			valor += valor*8/100;
			printf("Valor final do produto com impostos para MS: R$%.2f\n", valor);
			break;
		default:
			printf("\nERRO!\nVenda não autorizada para estado informado\n");
		}
			
	return 0;
}

/*Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado possui uma taxa diferente de imposto sobre o produto. Faça um programa em que o usuário entre com o valor e o estado de destino do produto e o programa retorne o preço final do produto acrescido do imposto do estado em que ele será vendido. Se o estado difitado não for válido, mostrará uma mensagem de erro
 
 MG - 7%
 SP - 12%
 RJ - 15%
 MS - 8%*/
