#include <stdio.h>
#include <stdlib.h>

int main(){
	int a,b;
	printf("Informe o valor de a: ");
	scanf("%d", &a);

	printf("Informe o valor de b: ");
	scanf("%d", &b);
	
	a = a + b;
	b = a - b;
	a = a - b;
	printf("A variável \"a\" recebe: %d\nA variável \"b\" recebe: %d\n",a,b);

	return 0;
}

/*3) Faça um programa em C para trocar o valor de duas variáveis inteiras sem utilizar nenhuma
variável auxiliar.*/
