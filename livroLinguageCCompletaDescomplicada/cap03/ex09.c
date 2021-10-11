#include <stdio.h>
#include <stdlib.h>

int main(){
	float ang,rad,pi = 3.141592;
	
	printf("Informe o ângulo em graus para conversão em radianos: ");
	scanf("%f",&ang);

	rad = ang*pi/180;

	printf("O valor informado é: %f radianos\n",rad);

	return 0;
}

/*Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de conversão é R = G*pi/180, sendo G o ângulo em graus e R em radianos e pi = 3.141592*/
