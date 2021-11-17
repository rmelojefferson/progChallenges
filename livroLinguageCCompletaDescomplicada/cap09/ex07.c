#include <stdio.h>
#include <stdlib.h>

int convertSec(int h, int m, int s) {
	int hs, ms, total;

	hs = h*3600;
	ms = m*60;
	
	total = hs+ms+s;
	return total;
}

int main() {
	int h, m, s;
	
	printf("Informe a hora no formato hh mm ss: ");
	scanf("%d%d%d", &h, &m, &s);

	printf("\n%d horas, %d minutos e %d segundos em segundos %d.\n\n", h, m, s, convertSec(h, m, s));
	return 0;
} 

/*Elabore uma função que receba três números inteiros como parâmentro, representando horas, minutos e segundos. A função deve retornar esse horário convertido em segundos.*/
