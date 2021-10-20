#include <stdio.h>

int main() {
	int operacao;
	float num1, num2;

	do {
		printf("Informe o número da operação que deseja realizar o cálculo: \n1 - Somar\n2 - Subtrair\n3 - Multiplicar\n4 - Dividir\n0 - Sair\n");
		scanf("%d", &operacao);

		switch(operacao) {
			case 1:
				printf("\nInforme o primeiro número: ");
				scanf("%f", &num1);
				
				printf("Informe o segundo número: ");
				scanf("%f", &num2);
				
				printf("\n%.0f + %.0f = %0.f\n\n", num1, num2, num1 + num2);
				break;

			case 2:
				printf("\nInforme o primeiro número: ");
				scanf("%f", &num1);
				
				printf("Informe o segundo número: ");
				scanf("%f", &num2);
				
				printf("\n%.0f - %.0f = %0.f\n\n", num1, num2, num1 - num2);
				break;

			case 3:
				printf("\nInforme o primeiro número: ");
				scanf("%f", &num1);
				
				printf("Informe o segundo número: ");
				scanf("%f", &num2);
				
				printf("\n%.0f * %.0f = %0.f\n\n", num1, num2, num1 * num2);
				break;

			case 4:
				printf("\nInforme o primeiro número: ");
				scanf("%f", &num1);
				
				do {
					printf("Informe o segundo número (Não pode ser 0): ");
					scanf("%f", &num2);
				} while (num2 == 0);
				
				printf("\n%.0f / %.0f = %0.f\n\n", num1, num2, num1 / num2);
				break;

			case 0:
				printf("\nPrograma encerrado\n\n");
				break;

			default:
				printf("\nOpção inválida!\n\n");
		}
	} while (operacao != 0);
	return 0;
}

/*Escreva um programa em C que funcione como uma calculadora. O programa deve apresentar um menu ao usuário da seguinte forma:
1 – Somar
2 – Subtrair
3 – Multiplicar
4 – Dividir
0 – Sair 

Uma estrutura do tipo switch deve ser utilizada para realizar cada operação em um case. Após a escolha da operação, dois valores devem ser pedidos ao usuário para realizar a operação escolhida. Se a operação escolhida for a 4 o dividendo não pode ser zero, um novo valor deve ser solicitado. O programa deve funcionar até que o usuário escolha a opção 0 (opção de saída).*/
