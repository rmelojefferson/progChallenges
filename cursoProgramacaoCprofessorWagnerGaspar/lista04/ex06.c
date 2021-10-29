#include <stdio.h>
#include <stdlib.h>

int main() {
	float vet[10];
	int i, option;
	
	for(i = 0; i < 10; i++) {
		printf("Informe o %dº valor: ", i + 1);
		scanf("%f", &vet[i]);
	}

	do {
		printf("\nEscolha uma opção abaixo(Digite o número correspondente):\n1 - Imprimir o vetor na ordem informada\n2 - Imprimir o vetor na ordem invesa\n0 - Finalizar o programa\n");
		scanf("%d", &option);
	
		switch(option) {
			case 1:
				printf("\nVetor na ordem informada:\n");
				for(i = 0; i < 10; i++) {
					printf("%.2f ", vet[i]);
				}
				printf("\n\n");
				break;
			case 2:
				printf("\nVetor na ordem inversa:\n");
				for(i = 9; i >= 0; i--) {
					printf("%.2f ", vet[i]);
				}
				printf("\n\n");
				break;
			case 0:
				printf("Finalizando...\n");
				break;
			default:
				printf("\n\nOpção inválida...\n\n");
		}
	} while (option != 0);
	return 0;
}

/*Faça um programa que leia 10 números reais e os armazene em um vetor. Em seguida, leia um código inteiro e faça uma das ações abaixo:
0 – finaliza o programa;
1 – imprime o vetor na ordem do início ao fim;
2 – imprime o vetor na ordem inversa (do fim para o início).
O programa deve funcionar até que o usuário digite 0 para finalizar.*/
