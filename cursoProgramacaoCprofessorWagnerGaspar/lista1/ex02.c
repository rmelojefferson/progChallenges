#include <stdio.h>
#include <stdlib.h>

int main(){
	int a,b,c;
	printf("Informe um valor inteiro para a: ");
	scanf("%d", &a);

	printf("Informe um valor inteiro para b: ");
	scanf("%d", &b);

	c = a;
	a = b;
	b = c;

	printf("A variável \"a\" recebe: %d\nA variável \"b\" recebe: %d\n",a,b);
	return 0;
}

/*2) Elabore um algoritmo que receba, por meio do teclado, dois valores, um para a variável “a” e um
para a variável “b”. Em seguida, faça os passos que julgar necessário para que ao final, a variável
“a” possua o valor que inicialmente estava em “b” e a variável “b” possua o valor que inicialmente
estava em “a”. Traduza seu algoritmo para a linguagem C e exiba os valores na tela.*/
