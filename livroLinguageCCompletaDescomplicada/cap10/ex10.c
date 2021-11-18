#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, *b, **c, ***d;

	b = &a;
	c = &b;
	d = &c;

	printf("Informe um número inteiro: ");
	scanf("%d", &a);

	printf("Dobro: %d\n", *b *2);
	printf("Triplo: %d\n", **c  *3);
	printf("Quádruplo: %d\n", ***d  *4);

	return 0;
}

/*Considere a seguinte declaração: int A, *B, **C, ***D 
 * Escreva um programa que leia a variável A e calcule e exiba o dobro, o triplo e o quádruplo desse valor utilizando apenas os ponteiros B, C e D. O ponteiro B deve ser usada para calcular o dobro, C o triplo e D o quádruplo.*/
