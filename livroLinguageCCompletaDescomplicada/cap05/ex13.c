#include <stdio.h>
#include <stdlib.h>

int main() {
	int total = 0, i;
	
	for(i = 0; i < 1000; i++) {
		if(i % 3 == 0) {
			total += i;
		} 
		if(i % 5 == 0){
			if(i % 3 == 0){
				continue;
			} else {
				total += i;
			}
		}
	}
	printf("A soma de todos os números naturais abaixo de 1000 é: %d\n", total);
		
	return 0;
}

/*Faça um programa que exiba a soma de todos os números naturais abaixo de 1.000 que são múltiplos de 3 ou 5.*/
