#include <stdio.h>
#include <stdlib.h>

int main() {
	int num_arr[10], i, j;

	for(i = 0; i < 10; i++) {
		printf("Informe o %dº número: ", i + 1);
		scanf("%d", &num_arr[i]);

		for(j = 0; j < 10; j++) {
			if(num_arr[i] == num_arr[j]) {
				if(i == j) {
					continue;
				}
				while(num_arr[i] == num_arr[j]){
					printf("Este número já foi informado, informe outro: ");
					scanf("%d", &num_arr[i]);
				}
			}
		}
	}
	
	printf("\n\n");
	for(i = 0; i < 10; i++) {
		printf("%dº número: %d\n", i + 1, num_arr[i]);
	}
	printf("\n\n");
	return 0;
}

/*Faça um programa para ler 10 números diferentes a serem armazenados em um vetor. Os números deverão ser armazenados no vetor na ordem em que forem lidos, sendo que, caso o usuário digite um número que já foi digitado, o programa deverá pedir a ele para digitar outro número. Note que cada valor digitado pelo usuário deve ser pesquisado no vetor, verificando se ele existe entre os números que já foram fornecidos. Exiba na tela o vetor final que foi digitado.*/
