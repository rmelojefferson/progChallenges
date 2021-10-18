#include <stdio.h>
#include <stdlib.h>

int main() {
	int num, i;

	printf("Informe o número que deseja saber os divisores: ");
	scanf("%d", &num);

	printf("Os divisores de %d são: 1");
	for(i = 2; i < num; i++) {
		if(num % i == 0) {
			printf(", %d", i);
		}
	}
	printf(" e %d\n", num);
	return 0;
}

/*Faça um algoritmo que leia um número positivo e imprima seus divisores. Exemplo: Os divisores do número 66 são: 1, 2, 3, 6, 11, 22 , 33 e 66.*/
