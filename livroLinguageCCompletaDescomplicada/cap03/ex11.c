#include <stdio.h>
#include <stdlib.h>

int main(){
	float area,raio,pi = 3.141592;

	printf("Informe o valor do raio do círculo:");
	scanf("%f",&raio);

	area = pi*(raio*raio);

	printf("A área do cículo é: %f\n",area);

	return 0;
}

/*Leia o valor do raio de um círculo. Calcule e imprima a área do círculo correspondente. A área do círculo é A = pi*raio², sendo pi = 3.141592.*/
