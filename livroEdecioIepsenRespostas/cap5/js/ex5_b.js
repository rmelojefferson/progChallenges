let numeros = [];

function adicionarNumero() {
	let inNumero = document.getElementById("inNumero");
	let numero = Number(inNumero.value);

	if(numero == '' || isNaN(numero)) {
		alert('Informe um número válido...');
		inNumero.value = '';
		inNumero.focus();
		return;
	}
	
	for(let i = 0; i < numeros.length; i++) {
		if(numero == numeros[i]) {
			alert('Você já inseriu este número, por favor, escolha outro número');
			inNumero.focus();
			inNumero.value = '';
			return;
		}
	}
	numeros.push(numero);
	document.getElementById("outNumeros").textContent = `Números: ${numeros.join(', ')}`;
	inNumero.focus();
	inNumero.value = '';
}
let btAdicionar = document.getElementById("btAdicionar");
btAdicionar.addEventListener("click", adicionarNumero);

function verificarOrdem() {
	let outVerificacao = document.getElementById("outVerificacao");
	let verificador = 0;

	if(numeros == '' ) {
		alert(`A lista está vazia!`);
	}
	for(let i = 0; i < numeros.length; i++) {
		if(verificador > numeros[i]){
			outVerificacao.textContent = `Atenção! Os números não estão em ordem crescente`;
			btVerificarOrdem.disabled = true;
			btAdicionar.disabled = true;
			btNovaLista.className = `exibe`;
		}else {
			verificador = numeros[i];
			outVerificacao.textContent = `Os números estão na ordem crescente.`;
			document.getElementById("inNumero").focus();
  		}	
	}
	
}	
let btVerificarOrdem = document.getElementById("btVerificarOrdem");
btVerificarOrdem.addEventListener("click", verificarOrdem);

function novaLista() {
	location.reload();
}
let btNovaLista = document.getElementById("btNovaLista");
btNovaLista.addEventListener("click", novaLista);

/*Exercício proposto para ser resolvido pelo leitor sem respostas.
	Proposta:
	Elaborar um programa que adicione números a um vetor. O programa deve impedir a inclusão de números repetidos. Exibir a lista de números a cada inclusão. Ao clicar no botão Verificar Ordem, o programa deve analisar o conteúdo do vetor e informar se os números estão ou não em ordem crescente.*/
