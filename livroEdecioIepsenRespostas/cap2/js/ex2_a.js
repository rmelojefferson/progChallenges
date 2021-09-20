function mostrarPromocao(){
	let inMedicamento = document.getElementById("inMedicamento");
	let inPreco = document.getElementById("inPreco");
	let outTitulo = document.getElementById("outTitulo");
	let outValorPromocao = document.getElementById("outPreco");

	
	outTitulo.textContent = `Promoção de ${inMedicamento.value}`;
	let preco = Number(inPreco.value);
	let valorPromocao = Math.floor(preco*2);
	outValorPromocao.textContent = `Leve 2 por apenas R$: ${valorPromocao.toFixed(2)}`;
}

let btMostrarPromocao = document.getElementById("btMostrarPromocao");
btMostrarPromocao.addEventListener("click", mostrarPromocao);

/* 
 *Exercício proposto para ser resolvido pelo leitor sem respostas.
 * Proposta:
 * Uma farmácia está com uma promoção - Na compra de duas unidades de um mesmo medicamento, o cliente recebe como desconto os centavos do valor total. Elaborar um programa que leia descrição e preço de um medicamento. Informe o valor do produto na promoção.
 * Ex: O valor do produto é R$7,10
 * O programa deve informar que duas unidades deste produto na promoção saem por R$14,00 no total.
 */