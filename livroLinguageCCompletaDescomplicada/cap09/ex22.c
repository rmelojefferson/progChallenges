#include <stdio.h>
#include <stdlib.h>

void volume(float r, float *v) {
	*v = (4*3.141592*(r*r*r))/3;
}

void area(float r, float *a) {
	*a = 4*3.141592*(r*r);
}

int main() {
	float r, v, a;//raio, volume, area

	printf("Informe o raio da esfera: ");
	scanf("%f", &r);

	volume(r, &v);
	area(r, &a);

	printf("\nVolume = %.2f\nÁrea = %.2f\n\n", v, a);


	return 0;
}

/*Escreva uma função para o cálculo do volume e da área de uma esfera
 *
 * v = 4/3pi+r³, A = 4pi*r², em que pi = 3.141592. O valor do raio r deve ser passado por parâmetro, e os valores calculados devem ser retornados por referência.*/
