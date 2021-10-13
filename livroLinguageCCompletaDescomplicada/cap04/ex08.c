#include <stdio.h>
#include <stdlib.h>

int main() {
	int idade;

	printf("Informe a idade do nadador(a): ");
	scanf("%d", &idade);

	if(idade<5) {
		printf("Não tem idade suficiente para natação.\n");
	}else if(idade>=5 && idade<=7) {
		printf("Nadador(a) categoria: Infantil A\n");
	} else if(idade>=8 && idade<=10) {
		printf("Nadador(a) categoria: Infantil B\n");
	} else if(idade>=11 && idade<=13) {
		printf("Nadador(a) categoria: Juvenil A\n");
	} else if(idade>=14 && idade<=17) {
		printf("Nadador(a) categoria: Juvenil B\n");
	} else {
		printf("Nadador(a) categoria: Sênior\n");
	}
	return 0;
}

/*Escreva um programa que, dada a idade de um nadador, classifique-o em uma das seguintes categorias:
 	Infantil A - 5-7
 	Infantil B - 8-10
 	Juvenil A - 11-13
 	Juvenil B - 14-17
 	Sênior - maiores de 18 anos*/
