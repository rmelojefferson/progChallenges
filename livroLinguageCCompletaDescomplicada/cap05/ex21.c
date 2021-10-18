#include <stdio.h>

int main() {
	int num, numMaior, maior = 0, ocorrencia = 1, i;

	printf("Informe quantos números deseja verificar: ");
	scanf("%d", &num);

	for(i = 0 ; i < num; i++) {
		printf("Informe o %dº número inteiro: ", i+1);
		scanf("%d", &numMaior);

		if(numMaior == maior) {
			ocorrencia++;
		}
		if(numMaior > maior) {
			maior = numMaior;
		}
	}
	printf("\nO maior número informado: %d\nEle foi repetido: %dx\n", maior, ocorrencia);
	return 0;
}

/*Escreva um programa que leia certa quantidade de números, imprima o maior deles e quantas vezes o maior número foi lido. A quantidade de números a serem lidos deve ser fornecida pelo usuário.*/
