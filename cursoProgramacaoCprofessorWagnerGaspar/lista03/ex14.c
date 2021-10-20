#include <stdio.h>

int main() {
	float salario, maior = 0, menor = 1000000, media;
	int i, funcionarios;

	do{
		printf("Informe o número de funcionários: ");
		scanf("%d", &funcionarios);
	} while (funcionarios < 1);

	for(i = 1; i <= funcionarios; i++) {
		printf("\nInforme o salário do %dº funcionário(a) (Use ponto no lugar de vírgula): ", i);
		scanf("%f", &salario);
		
		media += salario;

		if(salario > maior) {
			maior = salario;
		}
		if(salario < menor) {
			menor = salario;
		}
	}
	media /= funcionarios;

	printf("\nA média dos %d funcionários é R$%.2f\nO maior salário é R$%.2f\nO menor salário é R$%.2f\n", funcionarios, media, maior, menor);

	return 0;
}

/*Faça um programa que calcule a média de salários de uma empresa, pedindo ao usuário a quantidade de funcionários e o salário de cada funcionário. Ao final, o programa deve imprimir a média dos salários informados, o salário mais alto e o salário mais baixo.*/
