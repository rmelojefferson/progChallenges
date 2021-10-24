#include <stdio.h>
#include <stdlib.h>

int main() {
	int A[] = {1,0,5,-2,-5,7}, i, soma = 0;

	for(i = 0; i < 6; i++) {
		if(i == 0 || i == 1 || i == 5) {
			soma += A[i];
		}
		if(i == 4) {
			A[i] = 100;
		}
		printf("A[%d] = %d\n", i, A[i]);
	}
	printf("\nSoma dos índices A[0], A[1] e A[5]: %d\n\n", soma);

		


	return 0;
}

/*Faça um programa que possua um array de nome A que armazene seis números inteiros. O programa deve executar os seguintes passo:
a)Atribua os seguintes valores a esse array: 1, 0, 5, -2, -5, 7.
b)Armazene em uma variável a soma dos valores das posições A[0], A[1] e A[5] do array e mostre na tela essa soma.
c)Modifique o array na posição 4, atribuindo a essa posição o valor 100.
d)Mostre na tela cada valor do array, um em cada linha.*/
