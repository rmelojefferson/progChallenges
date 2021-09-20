function gerarCitacao() {
	let inNome = document.getElementById('inNome');
	let nome = inNome.value;

	if(nome == '' || !isNaN || nome.indexOf(' ') == -1 ) {
		alert('Informe o nome do autor corretamente...');
		inNome.focus();
		return;
	}
	let ultimoNome = nome.substr(nome.lastIndexOf(' ')).toUpperCase();
	let nomeVetor = nome.split(' ');
	let iniciais = '';
	for(let i = 0; i < nomeVetor.length - 1; i++) {
		iniciais += `${nomeVetor[i].charAt(0).toUpperCase()}. `;
	}

	document.getElementById('outCitacao').textContent = `Citação bibliográfica: ${ultimoNome}, ${iniciais}`;
}
let btGerarCitacao = document.getElementById('btGerarCitacao');
btGerarCitacao.addEventListener('click', gerarCitacao);


/*	Exercício proposto para ser resolvido pelo leitor sem respostas.
 *	Proposta:
 *	Elaborar um programa que leia o nome de um autor de um livro. Em seguida, exiba-o no formato de uma citação bibliográfica com o sobrenome, seguido pelas iniciais do nome*/
