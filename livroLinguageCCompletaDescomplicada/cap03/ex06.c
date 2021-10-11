#include <stdio.h>
#include <stdlib.h>

int main(){
	float km,ms;
	printf("Informe a velocidade em Km/h: ");
	scanf("%f",&km);

	ms = km/36;
	printf("A velocidade informada é: %f em metros por segundo\n",ms);
	return 0;
}

/*Leia uma velocidade em km/h (quilômetros por hora) e apresente convertida em m/s (metros por segundo). A fórmula de conversão é M = K/36, sendo K a velocidade em km/h e M em m/s.*/
