#include <stdio.h>

int main() {
	int i;

	printf("Os múltiplos de 7 entre 1 e 9999 são: 7");
	for(i = 2; i < 10000; i++) {
		printf(", %d", 7 * i);
	}
	printf(".\n");
	return 0;
}

/*Faça um programa que imprima na tela todos os múltiplos de 7 entre 1 e 9999.*/
