#include <stdio.h>
#include <stdlib.h>

int main() {
	int num, i, negativos = 0, media = 0;
	
	for(i = 0; i < 10; i++) {
		printf("Informe o %dº número (números negativos serão ignorados): ", i + 1);
		scanf("%d", &num);
		if(num < 0) {
			printf("\nNúmero %d ignorado\n\n", num);
			negativos++;
			continue;
		} else {
			media += num;
		}
	}
	printf("\n\nQuantidade de números negativos ignorados: %d\n", negativos);
	printf("Total da somatória dos números positivos: %d\n", media);
	media /= (i-negativos);
	printf("A média do total dos números positivos informados: %d\n\n", media);
	return 0;
}

/*Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e imprima sua média.*/
