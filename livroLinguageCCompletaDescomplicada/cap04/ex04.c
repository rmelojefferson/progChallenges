#include <stdio.h>
#include <stdlib.h>

int main() {
	float salario, emprestimo;

	printf("Informe o valor do seu salário: R$");
	scanf("%f",&salario);

	printf("Informe o valor da prestação do empréstimo: R$");
	scanf("%f",&emprestimo);
	
	if(salario*0.2 > emprestimo) {
		printf("Empréstimo concedido\n");
	} else {
		printf("Empréstimo não concendido\n");
	}
	return 0;
}

/*Faça um programa que leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a prestação:
 	- For maior que 20% do salário, imprima: "Empréstimo não concedido".
 	- Caso contrário, imprima: "Empréstimo concedido."*/
