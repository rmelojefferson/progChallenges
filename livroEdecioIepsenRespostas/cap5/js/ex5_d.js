let noticias = [];

function adicionarNoticias() {
	let inNoticia = document.getElementById('inNoticia');

	let noticia = inNoticia.value;

	if(noticia == '' || !isNaN(noticia)) {
		alert('Insira uma notícia válida!');
		inNoticia.focus();
		return;
	}
	noticias.push(noticia);
	document.getElementById('outNoticiasCadastradas').textContent = `Notícias cadastradas: ${noticias.length}`;
	inNoticia.value = '';
	inNoticia.focus();
	}
let btAdicionar = document.getElementById('btAdicionar');
btAdicionar.addEventListener('click', adicionarNoticias);

function mostrarUltimasNoticias() {
	if(noticias == '') {
		alert('Não há notícias cadastradas!');
		document.getElementById('inNoticia').focus();
		return;
	}
	let quantasNoticias = prompt('Quantas notícias você deseja ver?');
	if(quantasNoticias>noticias.length || quantasNoticias == 0 || isNaN(quantasNoticias)){
		alert('Insira um número válido de notícias!');
		return;
	}	
	noticias.sort(function (a,b) {return a-b});
	noticias.reverse();
	
	let ultimasNoticias = '';
	
	for(let i = 0; i < quantasNoticias; i++) {	
		ultimasNoticias += `${noticias.length-i}º) ${noticias[i]}\n`;
	}
	document.getElementById('outNoticias').textContent = `${quantasNoticias} Últimas notícias \n\n${ultimasNoticias}`;
}
let btUltimasNoticias = document.getElementById('btUltimasNoticias');
btUltimasNoticias.addEventListener('click', mostrarUltimasNoticias);


/*	Exercício proposto para ser resolvido pelo leitor sem respostas.
 *	Proposta:
 *	Elaborar um programa que leia as últimas notícias da sua região e armazene-as em um vetor. Exibir na página, a cada inclusão, somente a quantidade de notícias cadastradas. O programa deve conter um botão que solicite o número de notícias que o usuário deseja visualizar e, então, liste as notícias em ordem inversa da inclusão, ou seja, apenas as notícias mais recentes devem ser listadas, de acordo com o número informado pelo usuário. Validar esse número para que seja inferior ou igual à quantidade de notícias cadastradas.*/
