#include <stdio.h>
#include <stdlib.h>

int main(){
	char maius,minus;

	printf("Informe uma letra maiúscula: ");
	scanf("%c",&maius);

	minus = maius+32;

	printf("%c\n",minus);

	return 0;
}

/*Fala um programa que converta uma letra maiúscula em letra minúscula. Use a tabela ASCII para isso*/
