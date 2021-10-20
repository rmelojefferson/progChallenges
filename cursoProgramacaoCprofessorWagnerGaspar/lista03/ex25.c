#include <stdio.h>

int main() {
	int i, i2 = 0, x, y;

	printf("Informe o valor de X e Y: ");
	scanf("%d%d", &x, &y);

	while(i2 <= y) {
		for(i = 1; i <= x; i++) {
			if(i2 == y) {
				printf("\n");
				return 0;
			}

			i2++;

			if(i2 < 10) {
				printf("0%d ", i2);
			} else {
				printf("%d ", i2);
			}
		}
		printf("\n");
	}
	return 0;
}

/*Escreva um programa que leia dois valores X e Y. A seguir, mostre uma sequência de 1 até Y, passando para a próxima linha a cada X números.

Exemplo de entrada:
3 99
Exemplo de saída:
1 2 3
4 5 6
7 8 9
10 11 12
...
97 98 99*/
