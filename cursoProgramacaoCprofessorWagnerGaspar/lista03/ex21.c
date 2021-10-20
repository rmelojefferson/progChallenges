#include <stdio.h>

int main() {
	int i, line = 0;

	do {
		line++;
		for(i = 1; i <= 20; i++) {
			printf("*");
		}
		printf("\n");
	} while(line < 10);

	return 0;
}

/*Escreva um programa que gere a saída abaixo (10 linhas, 20 * por linha).
Restrições:
→ A instrução “printf” pode ser utilizada no máximo 2 vezes;
→ O \n para saltar linha pode ser utilizado no máximo 1 vez.
********************
********************
********************
********************
********************
********************
********************
********************
********************
*********************/
