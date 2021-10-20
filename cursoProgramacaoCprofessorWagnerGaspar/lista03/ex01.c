#include <stdio.h>

int main() {
	int num, i;

	do {
		printf("Informe um número inteiro entre 1 e 10: ");
		scanf("%d", &num);
	}while(num < 1 || num > 10);

	for(i = 1; i <= 10; i++) {
		printf("%d * %d = %d\n", num, i, num * i);
	}
	return 0;
}

/*Elabore um programa em C para ler do teclado um valor inteiro entre 1 e 10 e apresentar a
tabuada. Exemplo:
Entrada 7
Saída:
7 * 1 = 7
7 * 2 = 14
7 * 3 = 21
7 * 4 = 28
7 * 5 = 35
7 * 6 = 42
7 * 7 = 49
7 * 8 = 56
7 * 9 = 63
7 * 10 = 70*/
