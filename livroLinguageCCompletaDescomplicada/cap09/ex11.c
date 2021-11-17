#include <stdio.h>
#include <stdlib.h>

int potencia(int x, int y) {
	int p = x;

	if(y == 0) {
		p = 1;
	} else {
		while(y > 1) {
			p *= x;
			y--;
		}
	}
	return p;
}

int main() {
	int num1, num2;

	printf("Informe o 1º número: ");
	scanf("%d", &num1);
	
	printf("Informe o 2º número: ");
	scanf("%d", &num2);

	printf("\n%d elevado a %d é %d\n\n", num1, num2, potencia(num1, num2));
	return 0;
}

/*Escreva uma função que receba por parâmentros dois valores inteiros x e y e calcule e retorne o resultado de x^y para o programa principal. Não use nenhum função pronta para isso.*/
