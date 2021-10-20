#include <stdio.h>

int main() {
	int i;
	float total = 1.0, cent = 1.0;

	for(i = 1; i < 30; i++) {
		cent *= 2.0;
		total += cent;
	}

	printf("Em 30 dias foram guardados R$%.2f\n", total * 0.01);

	return 0;
}

/*Você decidiu ficar rico guardando dinheiro por 30 dias consecutivos. Para tal, decidiu guardar 1 centavo no primeiro dia, 2 centavos no segundo dia, 4 centavos no terceiro dia, 8 centavos no quarto dia, e assim por diante. Faça um programa para calcular quanto você terá ao final dos 30 dias.*/
