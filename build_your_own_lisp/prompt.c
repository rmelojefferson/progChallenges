#include <stdio.h>
#include <stdlib.h>

#ifdef _WIN32
#include <string.h>

static char buffer[2048];

// Funcao imitadora readline
char* readline(char* prompt) {
	fputs(prompt, stdout);
	fgets(buffer, 2048, stdin);
	char* cpy = malloc(strlen(buffer)+1);
	strcpy(cpy, buffer);
	cpy[strlen(cpy)-1] = '\0';
	return cpy;
}

// Funcao imitadora add_history
void add_history(char* unused) {}

// Senao, inclua os cabecalhos da editline
#else

//readline é usada para ler entrada de algum prompt, permitindo editar a entrada
#include <readline/readline.h>
//history nos permite gravar o histórico das entradas de maneira que elas possam ser obtidas com as setas para cima e para baixo
#include <readline/history.h> 

#endif

int main(int argc, char** argv) {
	// Imprime informacao sobre versao e como sair
	puts("myLispy version 0.0.0.0.1");
	puts("Press Ctrl + C or Ctrl + Alt + C to exit\n");

	// Num laco que nunca acaba
	while(1) {
		// Imprime nosso prompt e obtem a entrada
		char* input = readline("myLispy> ");

		// Adiciona a entrada ao historico
		add_history(input);
		
		// Ecoa a entrada de volta para o usuario
		printf("> %s\n", input);
		// Libera a entrada obtida
		free(input);
	}
	return 0;
}
