function mostrarPrevisao() {
	let inNumChinchilas = document.getElementById("inNumChinchilas");
	let inNumAnos = document.getElementById("inNumAnos");
	let outResposta = document.getElementById("outResposta");

	let numChinchilas = Number(inNumChinchilas.value);
	let numAnos = Number(inNumAnos.value);

	if(numChinchilas <2 || numAnos == 0 || isNaN(numChinchilas) || isNaN(numAnos)) {
		alert(`Você precisa de pelo menos duas chinchilas e um ano de tempo para começar a criação...`);
		inNumChichilas.focus();
		return;
	}
	
	let resposta = ``;
	let triplica = numChinchilas;

	for(let i = 1;i<=numAnos;i++) {
		resposta += `${i}º: ${triplica} chinchilas\n`;
		triplica *= 3
	}
	outResposta.textContent = resposta
}
let btPrevisao = document.getElementById("btPrevisao");
btPrevisao.addEventListener("click", mostrarPrevisao);

/*Exercício proposto para ser resolvido pelo leitor sem respostas.
 * Proposta:
 * Digamos que o número de chinchilas de uma fazenda triplica a cada ano, após o primeiro ano. Elaborar um programa que leia o número inicial de chinchilas e ano a ano o número inicial de chinchilas seja maior ou igual a 2 (um casal).*/

