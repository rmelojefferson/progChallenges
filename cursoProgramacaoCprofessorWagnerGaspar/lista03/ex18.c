#include <stdio.h>

int main() {
	char sexo;
	int i, idade, maior, menor, total, salarioF = 0;
	float salario, media;

	printf("Informe o total de pessoas que fizeram a pesquisa: ");
	scanf("%d", &total);


	for(i = 1; i <= total; i++) {
		do {
			getchar();
			printf("\nSexo (Informe \'m\' ou \'f\'): ");
			scanf("%c", &sexo);
		} while(sexo != 'f' && sexo != 'm');
		
		printf("Idade: ");
		scanf("%d", &idade);
		
		if(idade > maior) {
			maior = idade;
		}
		if(idade < menor) {
			menor = idade;
		}
		
		printf("Salário: R$");
		scanf("%f", &salario);
		
		media += salario;

		if(sexo == 'f' && salario <= 2000.00) {
			salarioF++;
		}
	}

	media /= total;

	printf("\nMédia salarial dos entrevistado: R$%.2f\n\nPessoa mais velha entrevistada: %d\n\nPessoa mais nova entrevistada: %d\n\nQuantidade de mulheres com salário igual ou abaixo de R$2000,00: %d\n\n", media, maior, menor, salarioF);

	return 0;
}

/*Foi feita uma pesquisa entre os habitantes de uma região e foram coletados os dados de idade, sexo (M/F) e salário de X pessoas (x deve ser informado pelo usuário). Faça um algoritmo que informe:

a) a média de salário do grupo;
b) a maior e a menor idade do grupo;
c) a quantidade de mulheres com salário até R$2000,00.*/
