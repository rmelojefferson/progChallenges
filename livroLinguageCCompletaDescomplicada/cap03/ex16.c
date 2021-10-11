#include <stdio.h>
#include <stdlib.h>

int main(){
	int num,div,mult;

	printf("Informe um número inteiro: ");
	scanf("%d",&num);

	mult = num << 1 ;
	div = num >> 1;

	printf("%d * 2 = %d\n%d / 2 = %d\n",num,mult,num,div);
	return 0;
}

/*Escreva um programa que leia um número inteiro e mostre a multiplicação e a divisão desse número por dois("Utilize os operadores de deslocamento de bits).*/
