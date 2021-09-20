function gerarSenha() {
	let inNome = document.getElementById('inNome');

	let nome = inNome.value.toLowerCase();
	let nomeValido = validarNome(nome);
	
	if(nomeValido == false) {
		alert('Insira o nome completo do aluno');
		inNome.focus();
		return;
	}

	let ultimoSobrenome = obterSobrenome(nome);
	let quantasVogais = contarVogais(nome);
	
	document.getElementById('outSenha').textContent = `Senha inicial: ${ultimoSobrenome}${quantasVogais}`;
	
}
let btGerarSenha = document.getElementById('btGerarSenha');
btGerarSenha.addEventListener('click', gerarSenha);

function validarNome(nome) {
	if(nome == '' || nome.indexOf(' ') == -1) {
		return false;
	} else {
		return true;
	}
}

function obterSobrenome(nome) {
	let ultimoSobrenome = nome.substr(nome.lastIndexOf(' '));
	return ultimoSobrenome;
}

function contarVogais(nome) {
	let quantasVogais = 0;
	
	for(let i = 0; i < nome.length; i++) {
		if(nome.charAt(i) == 'a' || 
			nome.charAt(i) == 'e' ||
			nome.charAt(i) == 'i' ||
			nome.charAt(i) == 'o' ||
			nome.charAt(i) == 'u' ) {
		quantasVogais += 1;
		}
	}
	quantasVogais = quantasVogais < 10 ? `0${quantasVogais}` : quantasVogais;
	return quantasVogais;
}


/*	Exercício proposto para ser resolvido pelo leitor sem respostas.
 *	Proposta:
 *	Elaborar um programa que leia o nome de um aluno. O programa deve validar o preenchimento de um nome completo e exibir a senha inicial do aluno, a qual será o sobrenome seguido pelo número de vogais do nome completo dele. O programa deve conter as funções;
 *	- validarNome() - que receba um nome como parâmetro e retorn true(nome completo) ou false(nome incompleto);
 *	- obterSobrenome() - que receba um nome como parâmetro e retorne o último nome do aluno em letras minúsculas;
 *	- contarVogais() - que receba um nome e retorne o número de vogais deste, com dois dígitos;
*/
