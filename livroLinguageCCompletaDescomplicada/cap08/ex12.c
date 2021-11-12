#include <stdio.h>
#include <stdlib.h>

enum semana {dom = 1, seg, ter, qua, qui, sex, sab};

int main() {
	enum semana dia;

	printf("Informe o número do dia da semana: ");
	scanf("%d", &dia);

	while(dia < 1 || dia > 7) {
		printf("\nNúmero inválido!\nInforme o número do dia da semana: ");
		scanf("%d", &dia);
	}
	
	switch(dia) {
		case dom:
			printf("\nDomingo\n\n");
			break;
		case seg:
			printf("\nSegunda\n\n");
			break;
		case ter:
			printf("\nTerça\n\n");
			break;
		case qua:
			printf("\nQuarta\n\n");
			break;
		case qui: 
			printf("\nQuinta\n\n");
			break;
		case sex:
			printf("\nSexta\n\n");
			break;
		case sab:
			printf("\nSábado\n\n");
			break;
	}
	
	return 0;
}

/*Crie uma enumeração representando os dias da semana. Agora, escreva um programa que leia um valor inteiro do teclado e exiba o dia da semana correspondente.*/
