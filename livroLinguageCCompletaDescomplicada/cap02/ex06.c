#include <stdio.h>
#include <stdlib.h>

int main(){
	double num;
	printf("Informe um número: ");
	scanf("%lf",&num);
	printf("Seu número em notação cientifíca: %e\n",num);
	return 0;
}

/*Faça um programa que leia um valor do tipo double e depois o imprima na forma de notação científica.*/
