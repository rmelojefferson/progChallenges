function listarProdutos() {
	let produtos = localStorage.getItem('produto');
	if(produtos === null) {
		return;
	}
	let listaProdutos = produtos.split(';');
	listaProdutos.sort();
	let resposta = '';
	for(let i = 0 ; i < listaProdutos.length; i++) {
		resposta += `${listaProdutos[i]}\n`;	
	}
	document.getElementById('outLista').textContent = resposta;

}
listarProdutos();

function adicionarProduto() {
	let inProduto = document.getElementById('inProduto');
	let produto = inProduto.value;

	if(produto === '' || !isNaN(produto)) {
		alert('Insira o produto corretamente...');
		inProduto.focus();
		return;
	}
	inProduto.focus();
	inProduto.value = '';
	armazenaProdutos(produto);
	}
let btAdicionar = document.getElementById('btAdicionar');
btAdicionar.addEventListener('click', adicionarProduto);

function armazenaProdutos(produto) {	
	let listaProdutos = '';
	if(localStorage.getItem('produto')) {
		listaProdutos = `${localStorage.getItem('produto')};${produto}`;
		localStorage.setItem('produto', listaProdutos);
		listarProdutos();
	} else {
		listaProdutos = localStorage.setItem('produto', produto);
		listarProdutos();
	}
}

function limparLista() {
	let produtos = localStorage.getItem('produto');
	if(produtos === '' || produtos === null) {
		alert('Não tem produtos na lista');
		document.getElementById('inProduto').focus();
		return;
	}
	let confirmarLimpeza = confirm('Você realmente deseja limpar a lista?')
	if (confirmarLimpeza === true) {
		localStorage.removeItem('produto');
		document.getElementById('outLista').textContent = '';
        }
}
let btLimpar = document.getElementById('btLimpar');
btLimpar.addEventListener('click', limparLista);


/*	Exercício proposto para ser resolvido pelo leitor sem respostas.
 *	Proposta:
 *	Elaborar um programa para cadastrar produtos na lista de compras da semana. Salvar e exibir a listagem dos produtos em ordem alfabética.
*/
