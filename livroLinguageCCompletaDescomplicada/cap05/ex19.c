#include <stdio.h>

int main() {
	int s,num1 = 1, num2 = 1 , i;

	for(i = 0; i < 50; i++) {
		s += num1 / num2;
		num1 += 2;
		num2 += 1;
	}
	printf("%d\n", s);
	return 0;
}
/*Faça um programa que calcule e escreva o valor de S

  S = 1/1+3/2+5/3+7/4+...+99/50 */
