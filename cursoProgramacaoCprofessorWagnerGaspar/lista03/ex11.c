#include <stdio.h>

int main() {
	int i, tempo;
	float massa, controle = 0.05;

	printf("Informe a massa do material radiotivo em gramas: ");
	scanf("%f", &massa);

	do {
		massa /= 2.0;
		tempo += 50;

	} while(massa >= controle);
	printf("O material terá massa menor que 0,05g em %d segundos\n", tempo);

	return 0;
}

/*Um determinado material radioativo perde metade de sua massa a cada 50 segundos. Dada a massa inicial, em gramas, faça um programa que determine o tempo necessário para que essa massa se torne menor que 0,05 gramas.*/
