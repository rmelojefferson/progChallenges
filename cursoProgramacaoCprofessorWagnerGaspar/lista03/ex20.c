#include <stdio.h>

int main() {
	long double  grao = 1, total = 0;
	int i;

	for(i = 2; i <= 64; i++) {
		grao *= 2;
		total += grao;
	}
		printf("Quantidade de grãos na 64º casa do tabuleiro: %.2Lf\n", total);
	return 0;
}

/*Uma rainha requisitou os serviços de um monge e disse-lhe que pagaria qualquer preço. O monge, necessitando de alimentos, indagou à rainha sobre o pagamento, se poderia ser feito com grãos de trigo dispostos em um tabuleiro de xadrez (que possui 64 casas), de tal forma que o primeiro quadro deveria conter apenas um grão e os quadros subsequentes, o dobro do quadro anterior. Crie um programa para calcular o total de grãos de trigo que o monge recebeu.*/
