function verificarPerfeito() {
	let inNumero = document.getElementById("inNumero");
	let outDivisores = document.getElementById("outDivisores");
	let outResposta = document.getElementById("outResposta");

	let numero = Number(inNumero.value);

	if(numero == 0 || isNaN(numero)){
		alert(`Informe um número válido...`);
		inNumero.focus();
		return;
	}
	let resposta = `Os divisores de ${numero} são: 1`;
	let total = 1;
	for(let i = 2;i < numero; i++) {
		if(numero%i==0) {
		resposta += `, ${i}`;
		total += i;
		}
	}
	
	outDivisores.textContent = `${resposta} (Soma:${total})`;

	if(total==numero) {
		outResposta.textContent = `${numero} é um número é perfeito`;
	}else {
		outResposta.textContent = `${numero} não é um número não é perfeito`;
	}
}
let btPerfeito = document.getElementById("btPerfeito");
btPerfeito.addEventListener("click", verificarPerfeito);

/*Exercício proposto para ser resolvido pelo leitor sem respostas.
        Proposta:
        Elaborar um programa que leia um número e verifique se ele é ou não perfeito. Um número dito perfeito é aquele que é igual à soma dos seus divisores inteiros(exceto o próprio). O programa deve exibir os divisores do número e a soma deles.*/

