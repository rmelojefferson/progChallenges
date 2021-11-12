#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct coordenadas {
	int x;
	int y;
} coord;

int main() {
	coord c1, c2;

	printf("Informe a 1ª posição do eixo X: ");
	scanf("%d", &c1.x);

	printf("Informe a 1ª posição do eixo Y: ");
	scanf("%d", &c1.y);
	
	printf("Informe a 2ª posição do eixo X: ");
	scanf("%d", &c2.x);

	printf("Informe a 2ª posição do eixo Y: ");
	scanf("%d", &c2.y);

	printf("\nA distância entre a origem das coordenadas %d,%d e a posição %d,%d é %.2f\n\n", c1.x, c1.y, c2.x, c2.y, sqrt(pow((c2.x - c1.x), 2) + pow((c2.y - c1.y), 2)));
	
	return 0;
}

/*Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X e Y). Em seguida, declare e leia do teclado dois pontos e exiba a distância entre eles.*/
