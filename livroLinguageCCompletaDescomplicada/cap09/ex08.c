#include <stdio.h>
#include <stdlib.h>

void quadPerfeito(int n) {
	int i = 0, num;

	while(num != n || num < n) {
		num = i*i;
		if(num == n) {
			printf("\nO número %d é um quadrado perfeito\n\n", n);
			break;
		}
		if(num > n) {
			printf("\nO número %d não é um quadrado perfeito\n\n", n);
			break;
		}
		i++;
	}
}



int main() {
	int num;

	do {
		printf("Informe um número inteiro 0 não negativo: ");
		scanf("%d", &num);
	} while(num < 0);

	quadPerfeito(num);

	return 0;
}

/*Elabore uma função para verificar se um número é um quadrado perfeito. Um quadrado perfeito é um número inteiro não negativo que pode ser expresso como o quadrado de outro número inteiro. Exemplos: 1, 4, 9.*/
