#include <stdio.h>
#include <stdlib.h>

int main(){
	float num1,num2,num3,num4,media;
	printf("Informe o primeiro número(real): ");
	scanf("%f",&num1);

	printf("Informe o segundo número(real): ");
	scanf("%f",&num2);

	printf("Informe o terceiro número(real): ");
	scanf("%f",&num3);

	printf("Informe o quarto número(real): ");
	scanf("%f",&num4);

	media = (num1+num2+num3+num4)/4;

	printf("A média dos números informados é: %f\n",media);
	return 0;
}

/*Leia quatro valores do tipo float. Calcule e exiba a média aritmética desses valores.*/
