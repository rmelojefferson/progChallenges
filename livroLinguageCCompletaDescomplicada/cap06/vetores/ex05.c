#include <stdio.h>
#include <stdlib.h>

int main() {
	int numArr[8], num1, num2, i;

	for(i = 0; i < 8; i++) {
		printf("Informe o %dº número: ", i + 1);
		scanf("%d", &numArr[i]);
	}
	printf("\nInforme o primeiro número inteiro de 1 à 8: ");
	scanf("%d", &num1);
	
	printf("Informe o segundo número inteiro de 1 à 8: ");
	scanf("%d", &num2);
	
	printf("%d + %d = %d\n\n", numArr[num1 - 1], numArr[num2 - 1], numArr[num1 - 1] + numArr[num2 - 1]);
	
	return 0;
}

/*Faça um programa que leia um vetor de oito posições. Em seguida, leia também dois valores X e Y quaisquer correspondentes a dua posições no vetor. Seu programa deverá exibir a soma dos valores encontrados nas respectivas posições X e Y.*/
