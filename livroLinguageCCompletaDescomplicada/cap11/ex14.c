#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* soma_vetor(int a[], int b[]) {
	int *c, i;

	c = calloc(10, sizeof(int*));

	if(c == NULL) {
		printf("\nMemória insuficiente...\n\n");
		exit(1);
	}
	
	for(i = 0; i < 10; i++) {
		c[i] = a[i] + b[i];
	}
	return c;
}

int main() {
	int a[10], b[10], *c, i;

	srand(time(NULL));

	for(i = 0; i < 10; i++) {
		a[i] = rand()%10;
		b[i] = rand()%10;
	}

	c = soma_vetor(a , b);
	
	for(i = 0; i < 10; i++) {
		printf("%d + %d = %d\n", a[i], b[i], c[i]);
	}

	free(c);

	return 0;
}

/*Escreva uma função que receba como parâmetro dois vetores, A e B, de tamanho N cada. A função deve retornar o ponteiro para um vetor C de tamanho N alocado dinamicamente, em que C[i] = A[i] + B[i]*/
