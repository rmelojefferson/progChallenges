#include <stdio.h>

int main() {
	int num, i, i2, fatorial = 1;
	float e = 0.0;
	
	printf("Informe um número: ");
	scanf("%d", &num);

	for(i = 1; i <= num; i++) {
		fatorial = 1;
		for(i2 = i; i2 >= 1; i2--) {
			fatorial *= i2;
		}
		e += 1.0 / fatorial;
	}
	printf("%f\n", e);

	return 0;
}

/*Faça um programa que leia um valor inteiro e positivo N, calcule e mostre o valor de E, conforme a fórmula a seguir:

 e = 1/1!+1/2!+1/3!+...+1/n!*/
