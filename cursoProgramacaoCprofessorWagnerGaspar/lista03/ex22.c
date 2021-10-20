#include <stdio.h>

int main() {
	float chico = 1.5, ze = 1.1;
	int anos = 0;

	do {
		chico += 0.02;
		ze += 0.03;
		anos++;
	} while(chico > ze);
	printf("Levará %d anos para que o Zé fique maior que Chico\n", anos);

	return 0;
}

/*Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e cresce 3 centímetros por ano. Construa um programa que calcule e imprima quantos anos serão necessários para que Zé seja maior que Chico.*/
