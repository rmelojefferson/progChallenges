#include <stdio.h>
#include <stdlib.h>

int main() {
	float temp[12];
	int i, maior = 0, menor = 0;

	for(i = 0; i < 12; i++) {
		printf("Informe a temperatura do %dº mês do ano: ", i + 1);
		scanf("%f", &temp[i]);

		if(temp[i] > temp[maior]) {
			maior = i;			
		}
		if(temp[i] < temp[menor]) {
			menor = i;
		}
	}

	switch(maior) {
		case 0:
			printf("\nJaneiro foi o mês com a temperatura média mais alta.\nTemperatura média: %.2fCº\n", temp[maior]);
			break;
		case 1:
			printf("\nFevereiro foi o mês com a temperatura média mais alta.\nTemperatura média: %.2fCº\n", temp[maior]);
			break;
		case 2:
			printf("\nMarço foi o mês com a temperatura média mais alta.\nTemperatura média: %.2fCº\n", temp[maior]);
			break;
		case 3:
			printf("\nAbril foi o mês com a temperatura média mais alta.\nTemperatura média: %.2fCº\n", temp[maior]);
			break;
		case 4:
			printf("\nMaio foi o mês com a temperatura média mais alta.\nTemperatura média: %.2fCº\n", temp[maior]);
			break;
		case 5:
			printf("\nJunho foi o mês com a temperatura média mais alta.\nTemperatura média: %.2fCº\n", temp[maior]);
			break;
		case 6:
			printf("\nJulho foi o mês com a temperatura média mais alta.\nTemperatura média: %.2fCº\n", temp[maior]);
			break;
		case 7:
			printf("\nAgosto foi o mês com a temperatura média mais alta.\nTemperatura média: %.2fCº\n", temp[maior]);
			break;
		case 8:
			printf("\nSetembro foi o mês com a temperatura média mais alta.\nTemperatura média: %.2fCº\n", temp[maior]);
			break;
		case 9:
			printf("\nOutubro foi o mês com a temperatura média mais alta.\nTemperatura média: %.2fCº\n", temp[maior]);
			break;
		case 10:
			printf("\nNovembro foi o mês com a temperatura média mais alta.\nTemperatura média: %.2fCº\n", temp[maior]);
			break;
		case 11:
			printf("\nDezembro foi o mês com a temperatura média mais alta.\nTemperatura média: %.2fCº\n", temp[maior]);
			break;
	}
	switch(menor) {
		case 0:
			printf("\nJaneiro foi o mês com a temperatura média mais alta.\nTemperatura média: %.2fCº\n", temp[menor]);
			break;
		case 1:
			printf("\nFevereiro foi o mês com a temperatura média mais alta.\nTemperatura média: %.2fCº\n", temp[menor]);
			break;
		case 2:
			printf("\nMarço foi o mês com a temperatura média mais alta.\nTemperatura média: %.2fCº\n", temp[menor]);
			break;
		case 3:
			printf("\nAbril foi o mês com a temperatura média mais alta.\nTemperatura média: %.2fCº\n", temp[menor]);
			break;
		case 4:
			printf("\nMaio foi o mês com a temperatura média mais alta.\nTemperatura média: %.2fCº\n", temp[menor]);
			break;
		case 5:
			printf("\nJunho foi o mês com a temperatura média mais alta.\nTemperatura média: %.2fCº\n", temp[menor]);
			break;
		case 6:
			printf("\nJulho foi o mês com a temperatura média mais alta.\nTemperatura média: %.2fCº\n", temp[menor]);
			break;
		case 7:
			printf("\nAgosto foi o mês com a temperatura média mais alta.\nTemperatura média: %.2fCº\n", temp[menor]);
			break;
		case 8:
			printf("\nSetembro foi o mês com a temperatura média mais alta.\nTemperatura média: %.2fCº\n", temp[menor]);
			break;
		case 9:
			printf("\nOutubro foi o mês com a temperatura média mais alta.\nTemperatura média: %.2fCº\n", temp[menor]);
			break;
		case 10:
			printf("\nNovembro foi o mês com a temperatura média mais alta.\nTemperatura média: %.2fCº\n", temp[menor]);
			break;
		case 11:
			printf("\nDezembro foi o mês com a temperatura média mais alta.\nTemperatura média: %.2fCº\n", temp[menor]);
			break;
	}
	return 0;
}

/*Faça um programa que receba a temperatura média de cada mês do ano, armazenando-as em um vetor. Ao final, mostre a maior e a menor temperatura do ano e em que mês ocorreram (mostrar o mês por extenso: janeiro, fevereiro ...). Desconsidere empates.*/
