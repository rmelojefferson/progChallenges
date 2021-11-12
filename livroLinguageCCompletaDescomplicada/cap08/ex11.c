#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	int dia;
	int mes;
	int ano;
} data;

int main() {
	data d[2];
	int i, dias_passados = 0, aux_dia = 0, aux_mes = 0, aux_ano = 0;
	int meses[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	for(i = 0; i < 2; i++) {

		do {
			printf("Informe o mês: ");
			scanf("%d", &d[i].mes);
		} while(d[i].mes < 1 || d[i].mes > 12);

		do {
			printf("Informe o dia: ");
			scanf("%d", &d[i].dia);
		} while(d[i].dia < 1 || d[i].dia > meses[d[i].mes-1]);

		do {
			printf("Informe o ano (maior ou igual a 1900): ");
			scanf("%d", &d[i].ano);
		} while(d[i].ano < 1900);
	
		printf("%dª data: %d/%d/%d\n", i+1, d[i].mes, d[i].dia, d[i].ano);
	}
	
	if(d[0].ano > d[1].ano) {
		aux_dia = d[0].dia;
		d[0].dia = d[1].dia;
		d[1].dia = aux_dia;

		aux_mes = d[0].mes;
		d[0].mes = d[1].mes;
		d[1].mes = aux_mes;
		
		aux_ano = d[0].ano;
		d[0].ano = d[1].ano;
		d[1].ano = aux_ano;
		
	} else if(d[0].ano == d[1].ano) {
		if(d[0].mes > d[1].mes) {
			aux_dia = d[0].dia;
			d[0].dia = d[1].dia;
			d[1].dia = aux_dia;
			
			aux_mes = d[0].mes;
			d[0].mes = d[1].mes;
			d[1].mes = aux_mes;
			
		} else if(d[0].mes == d[1].mes) {
			if(d[0].dia > d[1].mes) {
				aux_dia = d[0].dia;
				d[0].dia = d[1].dia;
				d[1].dia = aux_dia;
				
			}
		}
	}
	
	aux_ano = d[0].ano + 1;
	while(aux_ano < d[1].ano) {
		dias_passados += 365;
		aux_ano++;
	}

	if(d[0].ano == d[1].ano) {
		for(i = d[0].mes; i < d[1].mes-1; i++) {
			dias_passados += meses[i];
		}
		dias_passados += meses[d[0].mes-1]-d[0].dia;
		dias_passados += d[1].dia;
	} else {
		for(i = d[0].mes; i < 11; i++) {
			dias_passados += meses[i];
		}
		for(i = 0; i < d[1].mes; i++) {
			dias_passados += meses[i];
		}
		dias_passados += meses[d[0].mes-1]-d[0].dia;
		dias_passados += d[1].dia;
		dias_passados += 2;
	}

	printf("A diferença de dias entre %d/%d/%d e %d/%d/%d é de %d dias.\n", d[0].mes, d[0].dia, d[0].ano, d[1].mes, d[1].dia, d[1].ano, dias_passados);
	
	return 0;
}

/*Escreva um programa que contenha uma estrutura representando uma data válida. Essa estrutura deve conter os campos dia, mês e ano. Em seguida, leia duas datas e armazene nessa estrutura. Calcule e exiba o número de dias que decorreram entre as duas datas.

OBS: Anos bissextos foram desconsiderados*/
