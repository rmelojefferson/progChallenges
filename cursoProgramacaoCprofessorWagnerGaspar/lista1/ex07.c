#include <stdio.h>
#include <stdlib.h>

int main(){
	int hour, min, sec, modulus;

	printf("Informe quantos segundos deseja converter para horas: ");
	scanf("%d", &sec);

	hour = sec/3600;
	modulus = sec%3600;

	min = modulus/60;
	sec %= 60;

	printf("%d:%d:%d\n", hour, min, sec);
	return 0;
}

/*7) Faça um programa para ler do teclado uma quantidade de segundos e imprimir na tela a
conversão para horas, minutos e segundos.
Exemplo:
Entrada: 3672
Saída: 1:1:12*/
