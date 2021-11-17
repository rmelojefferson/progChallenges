#include <stdio.h>
#include <stdlib.h>

void exclamacao(int n) {
	int i, j;

	for(i = 1; i <= n; i++) {
		for(j = 1; j <= n; j++) {
			if(j <= i) {
				printf("!");
			}
		}
		printf("\n");
	}
}

int main() {
	int num;

	printf("Informe um número inteiro: ");
	scanf("%d", &num);

	exclamacao(num);
	return 0;
}

/*Elabore uma função que receba como parâmetro um valor inteiro n e gere como saída n linhas com pontos de exclamação, conforme o exemplo a seguir, em que usamos n = 5:
 * 	!
 * 	!!
 * 	!!!
 * 	!!!!
 * 	!!!!!*/
