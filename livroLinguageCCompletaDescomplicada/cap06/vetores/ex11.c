#include <stdio.h>
#include <stdlib.h>

int main() {
	float num_arr[10], quad_arr[10];
	int i;

	for(i = 0; i < 10; i++) {
		printf("Informe o %dº número: ", i + 1);
		scanf("%f", &num_arr[i]);

		quad_arr[i] = num_arr[i] * num_arr[i];
	}
	
	printf("\n\n");

	for(i = 0; i < 10; i++) {
		printf("%.2f² = %.2f\n", num_arr[i], quad_arr[i]);
	}
	
	printf("\n\n");

	return 0;
}

/*Leia um conjunto de números reais, armazenando-o em vetor. Em seguida, calcule o quadrado de cada elemento desse vetor, armazenando esse resultado em outro vetor. Os conjuntos têm, no máximo, 20 elementos. Imprima os dois conjuntos de números.*/
