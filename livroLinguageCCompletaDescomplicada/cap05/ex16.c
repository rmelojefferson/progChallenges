#include <stdio.h>
#include <stdlib.h>

int main() {
	float num, hn = 1.0, i;

	printf("Informe um número para saber sua série harmônica: ");
	scanf("%f", &num);

	for(i = 2; i <= num; i++) {
		hn += 1.0/i;
	}

	printf("Séria harmônica de num: %f\n", hn);

	return 0;
}

/*Em matemática, o número harmônico designado por Hn define-se como o enésimo termo da série harmônica. Ou seja:

  Hn = 1 + 1 + 1 + 1...+ 1
 	   2   3   4     n

 Apresente um programa que calcule o valor de qualquer Hn.*/
