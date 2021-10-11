#include <stdio.h>
#include <stdlib.h>

int main(){
	float pri,seg,ter,premio = 780.000;
	
	pri = premio*0.46;
	seg = premio*0.32;
	ter = premio-(pri+seg);

	printf("O primeiro ganhador receberá: R$%f\nO segundo ganhador receberá: R$%f\nO terceiro ganhador receberá: R$%f\n",pri,seg,ter);
	return 0;
}

/*A importância de R$780.000,00 será dividida entre três ganhadores de um concurso, sendo que:
 	i. O primeiro ganhador receberá 46% do total.
 	ii. O segundo receberá 32% do total.
 	iii. O terceiro receberá o restante.*/
