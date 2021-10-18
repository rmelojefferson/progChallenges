#include <stdio.h>
#include <stdlib.h>

int main() {
	float altura, peso, imc;
	
	printf("Informe a sua altura (Utilize ponto no lugar da vírgula): ");
	scanf("%f", &altura);

	printf("Informe o seu peso(Utilize ponto no lugar da vírgula): ");
	scanf("%f", &peso);

	imc = peso/(altura*altura);


	if(imc < 18.5) {
		printf("\nSeu IMC é %.2f\nVocê está abaixo do peso ideal\n", imc);
	} else if(imc >= 25 && imc < 30) {
		printf("\nSeu IMC é %.2f\nVocê está com sobrepeso\n", imc);
	} else if(imc >= 30 && imc < 35) {
		printf("\nSeu IMC é %.2f\nVocê está com obesidade grau 1\n", imc);
	} else if(imc >= 35 && imc < 40) {
		printf("\nSeu IMC é %.2f\nVocê está com obesidade grau 2\n", imc);
	} else if(imc >= 40) {
		printf("\nSeu IMC é %.2f\nVocê está com obesidade grau 3\n", imc);
	} else {
		printf("\nseu IMC é %.2f\nVocê está com o peso ideal\n", imc);
	}
	return 0;
}

/*O IMC (Índice de massa corporal), pode ser calculado dividindo-se o peso da pessoa (em Kg) pela altura (h em metros) elevada ao quadrado (IMC = Kg/h²). Escreva um programa que leia o peso e altura de uma pessoa, calcule e mostre o IMC e a faixa em que o indivíduo se enquadra de acordo com a tabela abaixo:
 	IMC			|Interpretação
    				|
	Menor que 18.5		|Abaixo do peso
 	Entre 25 e menor que 30 |Sobrepeso
 	Entre 30 e menor que 35 |Obesidade grau 1
 	Entre 35 e menor que 40 |Obesidade grau 2
 	Maior ou igual a 40 	|Obesidade grau 3*/
