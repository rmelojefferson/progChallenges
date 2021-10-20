#include <stdio.h>

int main() {
	int i, total = 0, soma = 0;

	for(i = 1; i <= 1000; i +=2) {
		total += i;
		soma++;
	}
	printf("Total: %d\nNúmero de somas = %d\n", total, soma);
	return 0;
}

/*Faça um programa que some os números ímpares entre 1 e 1000 e imprima a resposta.

 Restrição:
 	O bloco de repetição deve executar no máximo 500 vezes.*/
