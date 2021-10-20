#include <stdio.h>

int main() {
	int num, i;
	
	printf("informe quantos números pares deseja saber a partir de 1: ");
	scanf("%d", &num);

	printf("Os primeiros %d números pares a partir de 1 são: 2", num);
	for(i = 4; i <= num; i += 2) {
		printf(", %d", i);
	}
	printf(".\n");
	return 0;
}

/*Leia um valor inteiro N. Apresente o quadrado de cada um dos valores pares, de 1 até N, inclusive N, se for o caso.*/
