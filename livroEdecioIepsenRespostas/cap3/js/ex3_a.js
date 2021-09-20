function mostrarParImpar() {
	let inNumero = document.getElementById("inNumero");
	let outResposta = document.getElementById("outResposta");

	let numero = Number(inNumero.value);
	
	if(numero%2 == 0){
		outResposta.textContent = `Esse número é Par!`;
	}else{
		outResposta.textContent = `Esse número é Ímpar!`;
	}
}
let btVerificar = document.getElementById("btVerificar");
btVerificar.addEventListener("click", mostrarParImpar);


/* 
 *Exercício proposto para ser resolvido pelo leitor sem respostas.
 * Proposta:  
 * Elaborar um programa que leia um número. Informe se ele é par ou ímpar.
 */
