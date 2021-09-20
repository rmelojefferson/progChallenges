function servicosPendentes() {
	let servico = localStorage.getItem('servico');
	if(servico === '' || servico === null) {
		document.getElementById('outPendentes').textContent = `Serviços pendentes: 0`;
		return;
	}
	let servicoArr = servico.split(';');
		document.getElementById('outPendentes').textContent = `Serviços pendentes: ${servicoArr.length}`;
}
servicosPendentes()

function adicionarServico() {
	let inServico = document.getElementById('inServico');
	let servico = inServico.value;
	
	if(servico === '' || !isNaN(servico)) {
		alert('Insira as informações corretamente...');
		inServico.focus();
		return;
	}
	let adicionaServico = 0;
	if(localStorage.getItem('servico')) {
		adicionaServico = `${localStorage.getItem('servico')};${servico}`;
		localStorage.setItem('servico', adicionaServico);
	} else {
		adicionaServico	= localStorage.setItem('servico', servico);
	}
	inServico.focus();
	inServico.value = '';
	servicosPendentes();
	return;
}
let btAdicionar = document.getElementById('btAdicionar');
btAdicionar.addEventListener('click', adicionarServico);

function servicoEmExecucao() {
	let servico = localStorage.getItem('servico');
	if(servico === '') {
		document.getElementById('inServico').focus();
		return;
	}
	let servicoArr = servico.split(';');
	document.getElementById('outEmExecucao').textContent = servicoArr[0];
	servicoArr.shift();
	localStorage.setItem('servico', servicoArr.join(';'));
	servicosPendentes();
}
let btExecutarServico = document.getElementById('btExecutarServico');
btExecutarServico.addEventListener('click', servicoEmExecucao);
/*	Exercício proposto para ser resolvido pelo leitor sem respostas.
 *	Proposta:
 *	Elaborar um programa para cadastrar os serviços a sere realizados por um auto center, que organize a ordem de execução dos serviços. Armazenar os serviços no navegador do usuário e a cada clique no botão "Executar servico", remover o primeiro serviço e exibi-lo n apágina. O programa deve atualizar o número de serviços pendentes quanto: a)a página for aberta; b)um serviço for incuído; c) um serviço for removido.
*/
