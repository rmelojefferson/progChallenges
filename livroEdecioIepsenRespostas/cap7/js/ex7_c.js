function temConvenio() {
	let temConvenio = document.getElementById('temConvenio');
	
	if(rbSim.checked) {
		temConvenio.className = 'exibe';
	} else {
		temConvenio.className = 'oculta';
	}
}
let rbNao = document.getElementById('rbNao');
rbNao.addEventListener('change', temConvenio);

let rbSim = document.getElementById('rbSim');
rbSim.addEventListener('change', temConvenio);


function valorVacina() {
	let inValor = document.getElementById('inValor');
	let valor = Number(inValor.value);


	if(valor == 0 || isNaN(valor)) {
		alert('Insira o valor corretamente...');
		inValor.focus();
		return;
	}

	let temConvenio = document.getElementById('temConvenio');
	let convenio = temConvenio.value;
	
	let tipoConvenio = '';

	if(rbNao.checked) {
		tipoConvenio = 'naoTemConvenio';
	} else {
		tipoConvenio = convenio;
	}
	
	let desconto =	calcularDesconto(tipoConvenio, valor);
	let total = valor-desconto;
	document.getElementById('outDesconto').textContent = `Desconto R$: ${desconto.toFixed(2)}`;
	document.getElementById('outTotal').textContent = `A pagar R$: ${total.toFixed(2)}`;
}
let btCalcular = document.getElementById('btCalcular');
btCalcular.addEventListener('click', valorVacina);

function calcularDesconto(convenio, valor) {
	if(convenio == 'amigoDosAnimais') {
		valor *= 0.20;
		return valor;
	} else if (convenio == 'saudeAnimal') {
		valor *= 0.50;
		return valor;
	} else {
		valor *= 0.10;
		return valor;
	}
}


/*	Exercício proposto para ser resolvido pelo leitor sem respostas.
	Proposta:
	Elaborar um programa para uma veterinária, o qual leia o preço de uma vacina e se o cliente possui ou não convênio. Caso possua algum convênio, exibir uma caixa de seleção com os convênios "Amigo dos animais" e "Saúde animal". O programa deve exibir o valor do desconto(10% sem convênio;20% para "Amigo dos animais";50% para "Saúde animal") e o valor a ser pago. Criar a função;
	calcularDesconto() - que receba os parâmetros valor e taxa de desconto. Retornar o valor do desconto.
*/
