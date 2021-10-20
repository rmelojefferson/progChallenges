#include <stdio.h>

int main() {
	float num1, num2, media;

	do {
		printf("Informe a primeira nota (0 - 10): ");
		scanf("%f", &num1);
	} while (num1 < 0 || num1 > 10);

	do {
		printf("Informe a segunda nota (0 - 10): ");
		scanf("%f", &num2);
	} while (num2 < 0 || num2 > 10);

	media = (num1 + num2)/2;

	printf("\nMédia = %.2f\n\n", media);
	return 0;
}

/*Faça um programa que leia as notas referentes às duas avaliações de um aluno. Calcule e imprima a média semestral. Faça com que o programa só aceite notas válidas (uma nota válida deve pertencer entre o intervalo de 0 a 10). Cada nota deve ser validada separadamente.*/
