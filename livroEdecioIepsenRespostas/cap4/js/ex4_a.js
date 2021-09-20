function repetirFruta() {
	let inFruta = document.getElementById("inFruta");
	let inNumero = document.getElementById("inNumero");
	let outResposta = document.getElementById("outResposta");

	let fruta = inFruta.value;
	let numero = Number(inNumero.value);

	if (fruta == `` || !isNaN(fruta) || numero == 0 || isNaN(numero)) {
		alert(`Coloque uma fruta e um número válido...`);
		fruta.infocus();
		return;
	}

	let resposta = `${fruta}`;
	
	for (let i = 1; i<=numero;i++) {
		resposta += `*${fruta}`;
	}
	outResposta.textContent = resposta;
}

let btRepetir = document.getElementById("btRepetir");
btRepetir.addEventListener("click", repetirFruta)

/*Exercício proposto para ser resolvido pelo leitor sem respostas.
 * Proposta:
 * Elaborar um programa que leia o nome de uma fruta e um número. O programa deve repetir a exibição do nome da fruta, de acordo com o número informado. Utilize o "*" para separar os nomes.*/

