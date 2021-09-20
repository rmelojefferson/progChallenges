let clubes = [];

function adicionarClube() {
	let inClube = document.getElementById("inClube");
	//let outClube = document.getElementById("outClube");
	
	let clube = inClube.value;
	
	if(clube == '' || !isNaN(clube)) {
		alert(`Insira um nome válido...`);
		inClube.focus();
		return;
	}
	
	clubes.push(clube);
	let lista = '';

	for(let i = 0; i < clubes.length;i++) {
		lista += `${i + 1}. ${clubes[i]}\n`;
	}
	document.getElementById("outClubes").textContent = lista;
	inClube.value = '';
	inClube.focus();
}
let btAdicionar = document.getElementById("btAdicionar");
btAdicionar.addEventListener("click", adicionarClube);

function listarClubes() {
	let inClube = document.getElementById("inClube");
	
	if(clubes.length == 0) {
		alert('Não tem nenhum clube na tabela');
		inClube.focus();
		return;
	}	
	
	let lista = '';

	for(let i = 0; i < clubes.length;i++) {
		lista += `${i + 1}. ${clubes[i]}\n`;
	}
	document.getElementById("outClubes").textContent = lista;
}
let btListar = document.getElementById("btListar");
btListar.addEventListener("click", listarClubes);

function montarTabela() {
	if(clubes.length == 0) {
		alert('Não tem nenhum clube na tabela');
		inClube.focus();
		return;
	}else if(clubes.length%2!=0) {
		alert('Não foi possível montar a tabela, insira mais um clube na lista.');	
		inClube.focus();
		return;

	}
	let tabela = '';

	for(let i = 0; i < clubes.length/2; i++) {
		tabela += `${clubes[i]} `;
		clubes.reverse();
		tabela += ` x ${clubes[i]}\n`;
		clubes.reverse();
	}
	document.getElementById("outClubes").textContent = tabela;
}
let btMontarTabela = document.getElementById("btMontarTabela");
btMontarTabela.addEventListener("click", montarTabela);

/*Exercício proposto para ser resolvido pelo leitor sem respostas.
	Proposta:
	Elaborar um programa para gerar uma tabela com os jogos de uma fase eliminatória de um campeonato. O programa deve conter três funções (a serem executadas no evento click de cada botão)
	Para:
	1- valudar o preenchimento, adicionar um clube ao vetor e listar os clubes;
	2- listar os clubes(se houve)
	3- montar a tabela de jogos, no formato primeiro X último, segundo X penúltimo e assim por diante. Exibir mensagem e não lista a tabela de jogos, caso o número de clubes informados seja ímpar*/
