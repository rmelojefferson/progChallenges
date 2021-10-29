#include <stdio.h>
#include <stdlib.h>

int main() {
	int vet_user[10], vet_quad[10], i;

	for(i = 0; i < 10; i++) {
		printf("Informe o %dº número: ", i + 1);
		scanf("%d", &vet_user[i]);

		vet_quad[i] = vet_user[i] * vet_user[i];
	}

	printf("\nVetor dos elementos informados: ");
	for(i = 0; i < 10; i++) {
		printf("%d ", vet_user[i]);
	}
	printf("\n");
	
	printf("\nQuadrado dos elementos informados: ");
	for(i = 0; i < 10; i++) {
		printf("%d ", vet_quad[i]);
	}
	printf("\n\n");
	return 0;
}

/*Faça um programa que preencha um vetor de inteiros de tamanho 10 pedindo valores ao usuário. Em seguida, calcule e salve num segundo vetor o quadrado de cada elemento do primeiro vetor. Por fim, imprima os dois vetores.*/
