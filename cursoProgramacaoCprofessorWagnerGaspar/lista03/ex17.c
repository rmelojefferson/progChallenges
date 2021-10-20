#include <stdio.h>

int main() {
	int num, positivos = 0, negativos = 0;

	do {
		printf("Digite um valor: ");
		scanf("%d", &num);

		if(num > 0) {
			positivos++;
		} else if( num < 0) {
			negativos++;
		} 
	} while (num != 0);
	printf("\nPositivos: %d\nNegativos: %d\n", positivos, negativos);
	return 0;
}

/*Faça um programa que peça números ao usuário. Quando o usuário digitar o número 0 (zero) o programa deve imprimir na tela quantos números positivos e negativos foram digitados.*/
