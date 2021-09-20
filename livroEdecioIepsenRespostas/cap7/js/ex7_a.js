function nomeCategoria() {
	let inNome = document.getElementById('inNome');
	let inIdade = document.getElementById('inIdade');
	let outResposta = document.getElementById('outResposta');

	let nome = inNome.value
	let idade = Number(inIdade.value);
	
	if(nome == '' || !isNaN(nome) || idade == '' || isNaN(idade)) {
		alert(`Insira os dados corretamente`);
		inNome.focus();
		return;
	}

	let nomeTraco = retornarTracos(nome);
	let categoria = categorizarAluno(idade);
	
	outResposta.textContent = `${nome}\n${nomeTraco}\nCategoria: ${categoria}`;
	limparCampos();
}
let btCategorizar = document.getElementById('btCategorizar');
btCategorizar.addEventListener('click', nomeCategoria);

function retornarTracos(nome) {
	let resposta = '';
	for(let i = 0; i < nome.length; i++) {
		if(nome.charAt(i) == ' ') {
			resposta += ` `;
		} else {
			resposta += `-`;
		}
	}
		return resposta

}

function categorizarAluno(idade) {
	let categoria = idade <= 12 ? 'infantil' : (idade <= 18) ? 'juvenil' : 'adulto';
	return categoria;
}

function limparCampos() {
	let nome = document.getElementById('inNome');
	nome.value = '';
	nome.focus();
	document.getElementById('inIdade').value = '';
}

/*	Exercício proposto para ser resolvido pelo leitor sem respostas.
 *	Proposta:
 *	Elaborar um programa que leia o nome e a idade de um atleta de um clube de natação. O programa deve exibir o nome com "-" abaixo das letras do nome e a categoria do atleta, que pode ser "infantil"(até 12 anos), "juvenil"(entre 13 e 18 anos) ou "adulto"(acima de 18 anos). O programa deve conter as funções:
	- retornarTracos() - que receba um nome como parâmetro e retorne uma linha com "-" para as letras do nome(nos espaços, manter os espaços);
	- categorizarAluno() - que receba um número como parâmetro e retorne a categoria do aluno, conforme indicação no enunciado do exercício.*/
