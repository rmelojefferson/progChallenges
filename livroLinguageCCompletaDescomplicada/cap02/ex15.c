#include <stdio.h>
#include <stdlib.h>

int main(){
	char a;
	int b;
	float c;
	printf("Informe um caractere, um número inteiro e um número real: ");
	scanf("%c %d %f",&a,&b,&c);
	printf("%c %d %f\n",a,b,c);
	printf("%c\t%d\t%f\n",a,b,c);
	printf("%c\n%d\n%f\n",a,b,c);
	return 0;
}

/*Escreva um programa que leia três variáveis, char, int e float. Em seguida, imprima-as de três maneiras diferentes: separadas por espaços, por uma tabulação horizontal e uma em cada linha. Use um único comando print() para cada operação de escrita das três variáveis*/
