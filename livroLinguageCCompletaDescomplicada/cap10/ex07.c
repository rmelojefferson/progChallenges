#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contem(char *a, char *b) {
	int i, j = 0, aux = 0, c = 0;

	for(i = 0; i < strlen(a); i++) {
		if(*(a+i) == *(b+j)) {
			aux++;
			j++;
			if(strlen(b) == aux) {
				c = 1;
				break;
			} 
		}else {
			aux = 0;
			j = 0;
		}
	}

	return c;
}


int main() {
	char a[50], b[50];

	printf("Informe uma palavra/frase: ");
	scanf("%50[^\n]", a);

	getchar();
	
	printf("Informe uma outra palavra/frase: ");
	scanf("%50[^\n]", b);

	if(contem(a, b) == 1) {
		printf("A segunda palavra/frase contém na primeira.\n");
	} else {
		printf("A segunda palavra/frase não contém na primeira.\n");
	}


	return 0;
}

/*Elabore uma função que receba duas strings como parâmetros e verifique se a segunda string ocorre dentro da primeira. Use aritmética de ponteiros para acessar os caracteres das strings*/
