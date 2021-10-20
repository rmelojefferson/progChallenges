#include <stdio.h>

int main() {
	int password = 123456, userPass;

	while(userPass != password) {
		printf("\nInforme a senha: ");
		scanf("%d", &userPass);
	}
	printf("\nAcesso permitido\n");

	return 0;
}

/*Escreva um programa que repita a leitura de uma senha até que ela seja válida. Para cada leitura
de senha incorreta informada, escrever a mensagem “Senha Invalida”. Quando a senha for
informada corretamente deve ser impressa a mensagem “Acesso Permitido” e o programa deve ser
encerrado. Considere que a senha correta é o valor 123456.*/
