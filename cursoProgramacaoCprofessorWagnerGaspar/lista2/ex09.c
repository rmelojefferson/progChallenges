#include <stdio.h>
#include <stdlib.h>

int main() {
	float nota1, nota2, nota3, media;
	char tipo;

	printf("Informe qual o tipo de média desesa calcular:\n\nAritmética (Digite \"a\"):\nPonderada (Digite: \"p\"):\n");
	scanf("%c", &tipo);

	switch(tipo){
		case 'a':
			printf("Informe a primera nota: ");
			scanf("%f", &nota1);
			
			printf("Informe a segunda nota: ");
			scanf("%f", &nota2);
			
			printf("Informe a terceira nota: ");
			scanf("%f", &nota3);

			media = (nota1 + nota2 + nota3) / 3;

			printf("\nMédia aritmética: %.2f\n\n", media);
			break;
	
		case 'p':
			printf("Informe a primera nota: ");
			scanf("%f", &nota1);
			
			printf("Informe a segunda nota: ");
			scanf("%f", &nota2);
			
			printf("Informe a terceira nota: ");
			scanf("%f", &nota3);

			media = ((nota1 * 3) + (nota2 * 3) + (nota3 * 4)) / (3 + 3 + 4);
	
			printf("\nMédia ponderada: %.2f\n\n", media);
			break;

		default:
			printf("Opção inválida\n");
	}
	return 0;
}

/*Um usuário deseja um programa onde possa escolher que tipo de média deseja calcular a partir de três notas. Faça um programa que leia as notas e o tipo da média escolhida pelo usuário e calcule a apresente a média:
Opções:
• ‘a’ - Aritmética.
• ‘p’ - Ponderada (pesos: 3,3,4).*/
