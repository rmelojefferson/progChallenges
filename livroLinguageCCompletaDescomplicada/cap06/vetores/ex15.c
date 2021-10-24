#include <stdio.h>
#include <stdlib.h>

int main() {
	float num_arr[10];
	int i, j, aux;

	for(i = 0; i < 10; i++) {
		printf("Informe o %dº número: ", i + 1);
		scanf("%f", &num_arr[i]);
	}
	
	for(i = 0; i < 10; i++){
		for(j = i + 1; j < 10; j++) {
			if(num_arr[i] > num_arr[j]) {
				aux = num_arr[i];
				num_arr[i] = num_arr[j];
				num_arr[j] = aux;
			}
		}
	}

	for(i = 0; i < 10; i++) {
		printf("%dº número: %.2f\n", i + 1, num_arr[i]);
	}

	return 0;
}

/*Leia um vetor com 10 números de ponto flutuante. Em seguida, ordene os elementos desse vetor e imprima o vetor na tela.*/
