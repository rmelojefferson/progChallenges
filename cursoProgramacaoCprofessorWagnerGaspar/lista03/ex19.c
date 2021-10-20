#include <stdio.h>

int main() {
	int x, y;

	do {
		printf("Informe os valores de X e Y: ");
		scanf("%d%d", &x, &y);

		if(x > 0 && y > 0) {
			printf("\nCoordenadas pertencem ao 1º quadrante.\n\n");
		} else if(x < 0 && y > 0) {
			printf("\nCoordenadas pertencem ao 2º quadrante.\n\n");
		} else if(x < 0 && y < 0) {
			printf("\nCoordenadas pertencem ao 3º quadrante.\n\n");
		} else if(x > 0 && y < 0){
			printf("\nCoordenadas pertencem ao 4º quadrante.\n\n");
		}
	} while(x != 0 && y != 0);

	return 0;
}

/*Escreva um programa para ler as coordenadas (X,Y) de uma quantidade indeterminada de pontos no sistema cartesiano. Para cada ponto escrever o quadrante a que ele pertence. O algoritmo será encerrado quando pelo menos uma de duas coordenadas for NULA (nesta situação sem
escrever mensagem alguma).
Exemplo de entrada:
 2  2
 3 -2
-8 -1
-7  1
 0  2

Exemplo de saída:
primeiro
quarto
terceiro
segundo*/
