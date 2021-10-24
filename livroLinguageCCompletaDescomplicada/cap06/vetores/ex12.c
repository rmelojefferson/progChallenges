#include <stdio.h>
#include <stdlib.h>

int main() {
	int num_arr[10], repet_arr[10] = {0}, i, j, iguais = 0;

	//Usuário atribui valores para cada variável
	for(i = 0; i < 10; i++) {
		printf("Informe o %dº número: ", i + 1);
		scanf("%d", &num_arr[i]);
	}

	printf("\nNúmeros repetidos na lista: ");

	//Laço verifica se há números repetidos na lista
	for(i = 0; i < 10; i++) {
		for(j = 0; j < 10; j++) {
			//Condição para evitar a verificação do mesmo índice
			if(i == j) {
				continue;
			//Caso tenha número repetido, será armazenada no array repet_arr[]
			} else if(num_arr[i] == num_arr[j]) {
				repet_arr[j] = num_arr[i];
				iguais++;
			}
		}
	}

	//Laço "limpa" o array de repetição que agora tem duas cópias dos números repetidos armazenados
	for(i = 0; i < 10; i++) {
		for(j = 0; j < 10; j++) {
			if(i == j) {
				continue;
			} else if(repet_arr[i] == repet_arr[j]) {
				repet_arr[i] = 0;
			}
		}
	}
	
	//Laço imprime os números que foram repetidos
	for(i = 0; i < 10; i++) {
		if(repet_arr[i] == 0) {
			continue;
		} else {
			printf("%d ", repet_arr[i]);
		}
	}
	
	//Se não houver números repetidos na lista, informa para o usuário
	if(iguais == 0) {
		printf("Não houve repetições\n\n");
	} else {
		printf("\n\n");
	}
	return 0;
}

/*Faça um programa que leia um vetor de 10 posições. Verifique se existem valores iguais e os escreva na tela.*/
