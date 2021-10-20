#include <stdio.h>

int main() {
	float nota1, nota2;
	int opcao;
	
	do { 
		do {
			printf("\nInforme a primeira nota (0 - 10): ");
			scanf("%f", &nota1);
		} while(nota1 > 10 ||  nota1 < 0);
		
		do {
			printf("Informe a segunda nota (0 - 10): ");
			scanf("%f", &nota2);
		} while(nota2 > 10 || nota2 < 0);
		
		printf("\nMédia = %.2f\n", (nota1 + nota2)/2);
		
		printf("\nNovo cálculo?\n1 - Sim\n2 - Não\n");
		scanf("%d", &opcao);
		
	} while(opcao != 2);

	return 0;
}

/*Escreva um programa para ler as notas da primeira e da segunda avaliação de um aluno. Calcule e imprima a média semestral. O programa deverá aceitar apenas notas válidas no intervalo [0,10]. Cada nota deve ser validada separadamente. Ao final, deve ser impressa a mensagem “novo calculo? (1-sim 2-nao)”, solicitando ao usuário que informe um código (1 ou 2), indicando se ele deseja ou não executar o programa novamente. Se for informado o código 1, deve ser repetida a execução de todo o programa para permitir um novo cálculo, se for informado o código 2 o programa deve ser encerrado.*/
