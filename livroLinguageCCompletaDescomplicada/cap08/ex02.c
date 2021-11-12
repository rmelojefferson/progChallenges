#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct coordenadas {
	int x;
	int y;
} coord;

int main() {
	coord c;

	printf("Informe a posição do eixo X: ");
	scanf("%d", &c.x);

	printf("Informe a posição do eixo Y: ");
	scanf("%d", &c.y);

	printf("\nA distância entre a origem das coordenadas (0, 0) e a posição %d,%d é %.2f\n\n", c.x, c.y, sqrt(pow(c.x, 2) + pow(c.y, 2)));
	
	return 0;
}

/*Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X e Y). Em seguida, declare e leia do teclado um ponto e exiba a distância dele até a origem das coordendas, isto é, a posição (0,0);*/
