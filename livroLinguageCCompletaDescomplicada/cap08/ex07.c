#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int hora;
	int min;
	int seg;
} horario;

int main() {
	horario h[5];
	int i, maior_h[3] = {0};

	for(i = 0; i < 5; i++) {
		do {
			printf("Informe apenas o valor da(s) hora(s) (0 à 23) do %dº horário: ", i+1);
			scanf("%d", &h[i].hora);
		} while(h[i].hora < 0 || h[i].hora > 23);

		do {
			printf("Informe apenas o valor do(s) minuto(s) do %dº horário: ", i+1);
			scanf("%d", &h[i].min);
		} while(h[i].min < 0 || h[i].min > 59);
		
		do {
			printf("Informe apenas o valor do(s) segundos(s) do %dº horário: ", i+1);
			scanf("%d", &h[i].seg);
		} while(h[i].seg < 0 || h[i].seg > 59);

		if(h[i].hora > maior_h[0]) {
			maior_h[0] = h[i].hora;
			maior_h[1] = h[i].min;
			maior_h[2] = h[i].seg;
		} else if(h[i].hora == maior_h[0]) {
			if(h[i].min > maior_h[1]) {
				maior_h[0] = h[i].hora;
				maior_h[1] = h[i].min;
				maior_h[2] = h[i].seg;
			} else if(h[i].min == maior_h[1]) {
				if(h[i].seg > maior_h[2]) {
					maior_h[0] = h[i].hora;
					maior_h[1] = h[i].min;
					maior_h[2] = h[i].seg;
				}
			}
		}
		printf("%dº horário: %d:%d:%d\n\n", i+1, h[i].hora, h[i].min, h[i].seg);
	}
	
	if(maior_h[0] < 10 && maior_h[1] >= 10 && maior_h[2] >= 10) {
		printf("\nMaior hora informada: 0%d:%d:%d\n\n", maior_h[0], maior_h[1], maior_h[2]);
	} else if(maior_h[0] < 10 && maior_h[1] < 10 && maior_h[2] >= 10) {
		printf("\nMaior hora informada: 0%d:0%d:%d\n\n", maior_h[0], maior_h[1], maior_h[2]);
	} else if(maior_h[0] < 10 && maior_h[1] < 10 && maior_h[2] < 10) {
		printf("\nMaior hora informada: 0%d:0%d:0%d\n\n", maior_h[0], maior_h[1], maior_h[2]);
	} else if(maior_h[0] >= 10 && maior_h[1] < 10 && maior_h[2] < 10) {
		printf("\nMaior hora informada: %d:0%d:0%d\n\n", maior_h[0], maior_h[1], maior_h[2]);
	} else if(maior_h[0] >= 10 && maior_h[1] >= 10 && maior_h[2] < 10) {
		printf("\nMaior hora informada: %d:%d:0%d\n\n", maior_h[0], maior_h[1], maior_h[2]);
	} else {
		printf("\nMaior hora informada: %d:%d:%d\n\n", maior_h[0], maior_h[1], maior_h[2]);
	}
	
	return 0;
}

/*Crie uma estrutura representando uma hora. Essa estrutura deve conter os campos hora, minuto e segundo. Agora, escreva um programa que leia um vetor de cinco posições dessa estrutura e imprima a maior hora.*/
