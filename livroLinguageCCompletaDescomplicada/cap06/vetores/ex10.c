#include <stdio.h>
#include <stdlib.h>

int main() {
	int num_arr[100] = {0},i = 0, j = 1;

	for(i = 0; i < 100; i++) {
		num_arr[i] = j;
		if(num_arr[i] % 7 == 0) {
			num_arr[i] += 1;
			j += 2;
		} else {
			j++;
		}

		if(num_arr[i] < 10) {
			printf("00%d ", num_arr[i]);
		} else if(num_arr[i] < 100) {
			printf("0%d ", num_arr[i]);
		} else {
			printf("%d ", num_arr[i]);
		}

		if((i + 1) % 10 == 0) {
			printf("\n");
		}
	}	
	return 0;	
}

/*Faça um programa que preencha um vetor de tamanho 100 com os 100 primeiros números naturais que não são múltiplos de 7. Ao final, imprima esse vetor na tela*/
