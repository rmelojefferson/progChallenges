#include <stdio.h>
#include <stdlib.h>

int main() {
	char mat[3][3];
	int i, j, x, y, aux, validador = 0;
	int linha_primeiro[3] = {0}, coluna_primeiro[3] = {0}, diagonal_principal_primeiro = 0, diagonal_secundaria_primeiro = 0;
	int linha_segundo[3] = {0}, coluna_segundo[3] = {0}, diagonal_principal_segundo = 0, diagonal_secundaria_segundo = 0;

	printf("\n\t\t  0   1   2\n\t\t0   |   |  \n\t\t -----------\n\t\t1   |   |  \n\t\t -----------\n\t\t2   |   |  \n\n");

	for(aux = 0; aux < 5; aux++) {

		do {
			printf("\n1º jogador(a):\nInforme a posição X e Y para posicionar o elemento no jogo: ");
			scanf("%d%d" , &x, &y);

			if(mat[x][y] == 'X' || mat[x][y] == 'O' || x < 0 || x > 2 || y < 0 || y > 2) {
				printf("\nPosição inválida ou já preenchida...\n");
			} else {
				mat[x][y] = 'X';
				validador = 1;
			}
		} while(validador == 0);
		
		validador = 0;

		printf("\n\t\t  0   1   2\n");
		for(i = 0; i < 3; i++) {
			printf("\t\t%d", i);
			for(j = 0; j < 3; j++) {
				if(mat[i][j] == 'X' || mat[i][j] == 'O') {
					if(mat[i][j] == 'X') {
					}
					if(j == 2) {
						printf(" %c", mat[i][j]);
					} else {
						printf(" %c |", mat[i][j]);
					}
				} else {
					if(j == 2) {
						printf("  ", mat[i][j]);
					} else {
						printf("   |", mat[i][j]);
					}
				}
			}
			if(i != 2) {
				printf("\n\t\t -----------\n");
			} else {
				printf("\n");
			}
		}

		for(i = 0; i < 3; i++) {
			for(j = 0; j < 3; j++) {
				if(mat[i][j] == 'X') {
					linha_primeiro[i]++;
					coluna_primeiro[j]++;
					
					if(i == j) {
						diagonal_principal_primeiro++;
					}
					if(i + j == 2) {
						diagonal_secundaria_primeiro++;
					}
				}
			}
		}

		if(diagonal_principal_primeiro == 3 || diagonal_secundaria_primeiro == 3 || linha_primeiro[0] == 3 || linha_primeiro[1] == 3 || linha_primeiro[2] == 3 || coluna_primeiro[0] == 3 || coluna_primeiro[1] == 3 || coluna_primeiro[2] == 3) {
				printf("\nO primeiro(a) jogador(a) venceu!\n\n");
				return 0;
		}
		for(i = 0; i < 3; i++) {
			linha_primeiro[i] = 0;
			coluna_primeiro[i] = 0;
		}
		diagonal_principal_primeiro = 0;
		diagonal_secundaria_primeiro = 0;
		
		if( aux != 4) {

			do {
				printf("\n2º jogador(a):\nInforme a posição X e Y para posicionar o elemento no jogo: ");
				scanf("%d%d" , &x, &y);

				if(mat[x][y] == 'X' || mat[x][y] == 'O' || x < 0 || x > 2 || y < 0 || y > 2) {
					printf("\nPosição inválida ou já preenchida...\n");
				} else {
					mat[x][y] = 'O';
					validador = 1;
				}
			} while(validador == 0);

			validador = 0;

			printf("\n\t\t  0   1   2\n");
			for(i = 0; i < 3; i++) {
				printf("\t\t%d", i);
				for(j = 0; j < 3; j++) {
					if(mat[i][j] == 'X' || mat[i][j] == 'O') {
						if(j == 2) {
							printf(" %c", mat[i][j]);
						} else {
							printf(" %c |", mat[i][j]);
						}
					} else {
						if(j == 2) {
							printf("  ", mat[i][j]);
						} else {
							printf("   |", mat[i][j]);
						}
					}
				}
				if(i != 2) {
					printf("\n\t\t -----------\n");
				} else {
					printf("\n");
				}
			}

			for(i = 0; i < 3; i++) {
				for(j = 0; j < 3; j++) {
					if(mat[i][j] == 'O') {
						linha_segundo[i]++;
						coluna_segundo[j]++;
						
						if(i == j) {
							diagonal_principal_segundo++;
						}
						if(i + j == 2) {
							diagonal_secundaria_segundo++;
						}
					}
				}
			}

			if(diagonal_principal_segundo == 3 || diagonal_secundaria_segundo == 3 || linha_segundo[0] == 3 || linha_segundo[1] == 3 || linha_segundo[2] == 3 || coluna_segundo[0] == 3 || coluna_segundo[1] == 3 || coluna_segundo[2] == 3) {
				printf("\nO segundo(a) jogador(a) venceu!\n\n");
				return 0;
			}
			for(i = 0; i < 3; i++) {
				linha_segundo[i] = 0;
				coluna_segundo[i] = 0;
			}
			diagonal_principal_segundo = 0;
			diagonal_secundaria_segundo = 0;
			
		}
	}
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 3; j++) {
			if(mat[i][j] == 'X') {
				linha_primeiro[i]++;
				coluna_primeiro[j]++;

				if(i == j) {
					diagonal_principal_primeiro++;
				}
				if(i + j == 2) {
					diagonal_secundaria_primeiro++;
				}
			} else {
				linha_segundo[i]++;
				coluna_segundo[j]++;
				
				if(i == j) {
					diagonal_principal_segundo++;
				}
				if(i + j == 2) {
					diagonal_secundaria_segundo++;
				}
			}
		}
	}

	if(diagonal_principal_primeiro == 3 || diagonal_secundaria_primeiro == 3 || linha_primeiro[0] == 3 || linha_primeiro[1] == 3 || linha_primeiro[2] == 3 || coluna_primeiro[0] == 3 || coluna_primeiro[1] == 3 || coluna_primeiro[2] == 3) {
		printf("\nO primeiro(a) jogador(a) venceu!\n\n");
	} else if(diagonal_principal_segundo == 3 || diagonal_secundaria_segundo == 3 || linha_segundo[0] == 3 || linha_segundo[1] == 3 || linha_segundo[2] == 3 || coluna_segundo[0] == 3 || coluna_segundo[1] == 3 || coluna_segundo[2] == 3) {
		printf("\nO segundo(a) jogador(a) venceu!\n\n");
	} else {
		printf("\nDeu velha...\n\n");
	}
	return 0;
}

/*Faça um programa para jogar o jogo da velha. Ao final imprima o resultado do jogo e pergunte se deseja jogar novamente.*/
