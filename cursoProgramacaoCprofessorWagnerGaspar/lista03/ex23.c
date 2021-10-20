#include <stdio.h>

int main() {
	int num, i, estrelas;

	printf("Informe o número de linhas de estrelas que deseja: ");
	scanf("%d", &num);

	for(i = 1; i <= num; i++){
		for(estrelas = 1; estrelas <= i; estrelas++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}

/*Escreva um programa que gere a saída abaixo.
Restrições:
→ A instrução “printf” pode ser utilizada no máximo 2 vezes;
→ O \n para saltar linha pode ser utilizado no máximo 2 vezes.
*
**
***
****
*****
******
*******
*********/
