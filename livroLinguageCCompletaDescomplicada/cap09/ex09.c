#include <stdio.h>
#include <stdlib.h>

void aritmetica(float n[]) {
	float media;
	media = (n[0]+n[1]+n[2])/3;
	printf("\nMédia: %.2f\n\n", media);
}

void ponderada(float n[]) {
	float media;
	media = ((n[0]*5) + (n[1]*3) + (n[2]*2))/(5+3+2);
	printf("\nMédia: %.2f\n\n", media);
}


int main() {
	float n[3];
	char tipo;
	int i;

	for(i = 0; i < 3; i++) {
		printf("Informe a %dª nota: ", i+1);
		scanf("%f", &n[i]);
	}

	do {
		getchar();
		printf("Digite \"a\" para média aritmética ou \"p\" para média ponderada: ");
		scanf("%c", &tipo);
	} while(tipo != 'a' && tipo != 'p');

	if(tipo == 'a') {
		aritmetica(n);
	} else {
		ponderada(n);
	}

	return 0;
}

/*Elabore uma função que receba três notas de um aluno como parâmetros e uma letra. Se a letra for "A", a função deverá calcular a média aritmética das notas do aluno; se for "P", deverá calcular a média ponderada, com pesos 5, 3 e 2. Retorne a média calculada para o programa principal.*/
