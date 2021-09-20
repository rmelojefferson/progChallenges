let candidatos = [];

function adicionarCandidato() {
	let inCandidato = document.getElementById('inCandidato');
	let inAcertos = document.getElementById('inAcertos');

	candidato = inCandidato.value;
	acertos = Number(inAcertos.value);
	
	if(candidato == '' || !isNaN(candidato) || isNaN(acertos)) {
		alert('Insira os dados corretamente...');
		inCandidato.focus();
		return;
	}
	
	candidatos.push({candidato:candidato, acertos:acertos});
	let lista = '';
	for(let i = 0; i < candidatos.length; i++) {
		lista += `${candidatos[i].candidato} - ${candidatos[i].acertos} acertos \n`;
	}
	document.getElementById('outCandidatos').textContent = lista
	inCandidato.value = '';
	inAcertos.value = '';
	inCandidato.focus();
}
let btAdicionar = document.getElementById('btAdicionar');
btAdicionar.addEventListener('click', adicionarCandidato);

function listarTodos() {
	if (candidatos == '') {
		alert('Não há candidatos na lista');
		document.getElementById('inCandidato').focus();
		return;
	}

	let listaCompleta = candidatos.slice();	
	
	let lista = '';
	for(let i = 0; i < listaCompleta.length; i++) {
		lista += `${listaCompleta[i].candidato} - ${listaCompleta[i].acertos} acertos \n`;
	}
	document.getElementById('outCandidatos').textContent = lista

}
let btListarTodos = document.getElementById("btListarTodos");
btListarTodos.addEventListener('click', listarTodos);

function aprovados() {
	if (candidatos == '') {
		alert('Não há candidatos na lista');
		document.getElementById('inCandidato').focus();
		return;
	}

	let acertosParaAprovar = prompt('Qual é o número de acertos para a aprovação?');
	
	if(acertosParaAprovar == '' || isNaN(acertosParaAprovar)) {
		alert('Insira um número corretamente');
		
	}
	
	let listaAprovados = candidatos.slice();
	listaAprovados.sort(function(a,b) {return a.acertos - b.acertos});
	listaAprovados.reverse();

	let lista ='';

	for(let i = 0; i < listaAprovados.length; i++) {
		if(listaAprovados[i].acertos >= acertosParaAprovar){
			lista += `${listaAprovados[i].candidato} - ${listaAprovados[i].acertos} acertos \n`;
		}
	}
	if(lista == '') {
		document.getElementById('outCandidatos').textContent = `Nenhum candidato foi aprovado!`;
	} else {
		document.getElementById('outCandidatos').textContent = lista;
	}
		
}
let btAprovados = document.getElementById('btAprovados');
btAprovados.addEventListener('click', aprovados);

/*Exercício proposto para ser resolvido pelo leitor sem respostas.
 * 	Proposta:
 * 	Elaborar um programa que leia nome e número de acertos de candidatos inscritos em um concurso. Listar os dados a cada inclusão. Ao clicar no botão Aprovados 2ª fase, ler o número de acertos para aprovação dos candidatos para a 2ª fase do concurso. O programa deve, então, exibir os candidatos aprovados, ou seja, apenas os que obtiveram nota maior ou igual à nota informada. Exibir os candidatos aprovados em ordem decrescente de número de acertos. Caso nenhum candidato tenha sido aprovado, exibir mensagem.*/
