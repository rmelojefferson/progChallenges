#include <stdio.h>
#include <stdlib.h>

int main(){
	float ladoA, ladoB, ladoC;
	
	printf("Informe o valor do primeiro lado do triângulo: ");
	scanf("%f", &ladoA);
	
	printf("Informe o valor do segundo lado do triângulo: ");
	scanf("%f", &ladoB);
	
	printf("Informe o valor do terceiro lado do triângulo: ");
	scanf("%f", &ladoC);

	if(ladoA + ladoB > ladoC && ladoA + ladoC > ladoB && ladoB + ladoC > ladoA) {
		if(ladoA == ladoB && ladoA == ladoC) {
			printf("Os dados informados formam um triângulo equilátero\n");
		} else if(ladoA == ladoB || ladoA == ladoC || ladoB == ladoC){
			printf("Os dados informados formam um triângulo isóceles\n");
		} else {
			printf("Os dados informados formam um triângulo escaleno\n");
		}
	} else {
		printf("Não é possível formar triângulo com os valores informados\n");
	}
	return 0;
}

/*Faça um programa que, dado três valores a, b e c, verifique se eles podem ser os comprimentos dos lados de um triângulo. Caso positivo, seu programa deve informar também se o triângulo é equilátero, isósceles ou escaleno. Caso contrário, seu programa deve escrever a mensagem “Não formam um triângulo”.*/
