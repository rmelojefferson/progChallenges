#include <stdio.h>

int main() {
	int cont, i = 1, j = 3;
	do {
		j += 5;
		for(cont = 1; cont <= 3; cont++) {
			printf("I = %d J = %d\n", i, j-=1);
		}
		i += 2;
	} while(i <= 9);
	return 0;
} 
/*Você deve fazer um programa que apresente a sequência conforme o exemplo abaixo.
I=1 J=7
I=1 J=6
I=1 J=5
I=3 J=9
I=3 J=8
I=3 J=7
I=5 J=11
I=5 J=10
I=5 J=9
...
I=9 J=15
I=9 J=14
I=9 J=13*/
