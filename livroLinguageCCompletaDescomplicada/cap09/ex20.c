#include <stdio.h>
#include <stdlib.h>

int fatorial(int n) {
	int i, fat = 1;

	for(i = 1; i <= n; i++) {
		fat *= i;
	}
	return fat;
}

long double neperiano(int n) {
	int i, fat;
	long double neperiano = 0.0;

	for(i = 0; i <= n; i++) {
		fat = fatorial(i);
		neperiano += 1.0/fat;
	}
	return neperiano;
}


int main() {
	int num;

	do {
		printf("Informe um número: ");
		scanf("%d", &num);
	} while(num < 0);

	printf("\ne = %.10Lf\n\n", neperiano(num));
	return 0;
}

/*Faça uma função que calcule e retorne o número neperiano e, e = 2,7182818284, usando a série a seguir:
 *
 * e = somatorio 1/n! = (1/0!)+(1/1!)+(1/2!)...*/
