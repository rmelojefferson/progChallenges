#include <stdio.h>

int main() {
	int num, i;
	
	printf("informe quantos números pares deseja saber a partir de 1: ");
	scanf("%d", &num);

	for(i = 2; i <= num; i += 2) {
		printf("%d² = %d\n", i, i * i );
	}
	return 0;
}

/*Leia um valor inteiro N. Apresente o quadrado de cada um dos valores pares, de 1 até N, inclusive N, se for o caso.*/
