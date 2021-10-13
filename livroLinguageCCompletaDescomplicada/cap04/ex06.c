#include <stdio.h>
#include <stdlib.h>

int main() {
	char sexo;
	float altura, peso;

	printf("Informe o seu sexo (F/f ou M/m): ");
	scanf("%c", &sexo);
	
	if(sexo != 'f' && sexo != 'F' && sexo != 'm' && sexo != 'M') {
		return 0;
	} else {
		printf("%c", sexo);
		printf("Informe a sua altura (Utilize ponto no lugar da vírgula): ");
		scanf("%f",&altura);

		if(sexo == 'm' || sexo == 'M') {
			peso = (72.7*altura)-58;
			printf("O seu peso ideal é: %.2fKg\n", peso);
		} else {
			peso = (62.1*altura)-44.7;	
			printf("O seu peso ideal é: %.2fKg\n", peso);
		}
	}
	return 0;
}

/*Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal, utilizando as seguintes fórmulas (Em que "h" corresponde à altura):
 	homem: (72.7*h)-58
 	mulher: (62.1*h)-44.7*/
