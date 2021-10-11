#include <stdio.h>
#include <stdlib.h>

int main(){
	char a,b,c,invertido;

	printf("Informe um número inteiro de 3 dígitos: ");
	scanf("%c %c %c",&a,&b,&c);

	printf("%c%c%c\n",c,b,a);

	return 0;
}

/*Faça um programa para ler um número inteiro positivo de três dígitos. Em seguida, calcule e mostre o número formado pelos dígitos invertidos do número lido. Exemplo: Número lido = 123 | Número gerado = 321.*/
