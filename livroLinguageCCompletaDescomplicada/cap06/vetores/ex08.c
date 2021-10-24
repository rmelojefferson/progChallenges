#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, negativos = 0 ;
	float num_arr[10], soma_positivos = 0.0;

	for(i = 0; i < 10; i++) {
		printf("Informe o %dº número: ", i + 1);
		scanf("%f", &num_arr[i]);
		if(num_arr[i] < 0) {
			negativos++;
		} else {
			soma_positivos += num_arr[i];
		}
	}
	printf("\nQuantidade de números negativos informados: %d\nSoma dos números positivos: %.2f\n\n", negativos, soma_positivos);

	return 0;
}

/*Faça um programa que preencha um vetor com 10 números reais. Em seguida, calcule e mostre na tela a quantidade de números negativos e a soma dos números positivos desse vetor.*/
