#include <stdio.h>
#include <stdlib.h>

int main() {
	int num_arr_a[10], num_arr_b[10], num_arr_c[10], i;

	for(i = 0; i < 10; i++) {
		printf("Informe %dº número do array A: ", i + 1);
		scanf("%d", &num_arr_a[i]);
	}
	
	printf("\n\n");

	for(i = 0; i < 10; i++) {
		printf("Informe %dº número do array B: ", i + 1);
		scanf("%d", &num_arr_b[i]);
	}

	printf("\n\n");

	for(i = 0; i < 10; i++) {
		printf("%d - %d = %d\n", num_arr_a[i], num_arr_b[i], num_arr_a[i] - num_arr_b[i]);
	}
	
	printf("\n\n");
	
	return 0;
}

/*Faça um programa que receba do usuário dois arrays, A e B, com 10 números inteiros cada. Crie um novo array C calculando C = A - B. Mostre na tela os dados do array C.*/
