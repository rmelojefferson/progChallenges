#include <stdio.h>
#include <stdlib.h>

int main() {
	int num, i;

	for(i = 0; i < 100; i += 2) {
		printf("%d + %d = %d\n", i, num, num + i);
		num += i;
	}
	return 0;
}

/*Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.*/
