#include <stdio.h>
#include <stdlib.h>

int main() {
	float altura, peso;

	printf("Informe a sua altura (Substitua a vírgula por ponto): ");
	scanf("%f", &altura);

	printf("Informe o seu peso (Substitua a vírgula por ponto): ");
	scanf("%f", &peso);

	if(altura < 1.20) {
		if(peso <= 60) {
			printf("Classificação: A\n");
		} else if(peso > 60 && peso <= 90) {
			printf("Classificação: D\n");
		} else {
			printf("Classificação: G\n");
		}
	} else if(altura >= 1.20 && altura <= 1.70) {
		if(peso <= 60) {
			printf("Classificação: B\n");
		} else if(peso > 60 && peso <= 90) {
			printf("Classificação: E\n");
		} else {
			printf("Classificação: H\n");
		}
	} else {
		if(peso <= 60) {
			printf("Classificação: C\n");
		} else if(peso > 60 && peso <= 90) {
			printf("Classificação: F\n");
		} else {
			printf("Classificação: I\n");
		}
	}
	return 0;
}

/*Faça um programa que leia a altura e o peso de uma pessoa. De acordo com a tabela a seguir, verifique e mostre qual a classificação dessa pessoa.*/
