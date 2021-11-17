#include <stdio.h>
#include <stdlib.h>

int maior(int a, int b) {
	if(a > b) {
		printf("\nO %d é maior que %d.\n\n",a, b);
	} else if(b > a) {
		printf("\nO %d é maior que %d.\n\n",b, a);
	}
}


int main() {
	int num1, num2;

	printf("Informe o 1º número: ");
	scanf("%d", &num1);

	printf("Informe o 2º número: ");
	scanf("%d", &num2);

	if(num1 == num2) {
		printf("\nOs números informados são iguais.\n\n");
	} else {
		maior(num1, num2);
	}
	return 0;
	
}

/*Escreva uma função que receba por parâmetro dois números e retorne o maio deles*/
