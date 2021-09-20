function trocarClube() {
	//cria referência aos elementos da página
	let imgClube = document.getElementById('imgClube');
	let divTitulo = document.getElementById('divTitulo');

	let clube;

	//verifica qual radiobutton está selecionado
	if(rbCorinthians.checked) {
		clube = 'Corinthians';
	} else if (rbPalmeiras.checked) {
		clube = 'Palmeiras';
	} else {
		clube = 'SaoPaulo';
	}
	//define as classe do divTitulo: row e cores do clube
	divTitulo.className = `row cores${clube}`;

	//nodifica a imagem de acordo com a seleção do cliente
	imgClube.src = `./img/ex8_a-${clube.toLowerCase()}.svg`;
	imgClube.className = 'exibe'; //exibe a imagem
	imgClube.alt = `Símbolo do ${clube}`; //modifica atributo alt

	//salva no navegador a escolha do cliente
	localStorage.setItem('clube', clube);
}
//captura os elementos do radiobutton
let rbCorinthians = document.getElementById('rbCorinthians');
let rbPalmeiras = document.getElementById('rbPalmeiras');
let rbSaoPaulo = document.getElementById('rbSaoPaulo');

//associa ao evento change a function trocarClube
rbCorinthians.addEventListener('change', trocarClube);
rbPalmeiras.addEventListener('change', trocarClube);
rbSaoPaulo.addEventListener('change', trocarClube);

function verificarClube() {
	//se já estiver salvo algum clube
	if(localStorage.getItem('clube')) {
		let clube = localStorage.getItem('clube') //obtém o nome do clube
		
		//conforme o clube, marca um dos elementos do input type radio

		if(clube == 'Corinthians') {
			rbCorinthians.checked = true;
		} else if(clube == 'Palmeiras') {
			rbPalmeiras.checked = true;
		} else {
			rbSaoPaulo.checked = true;
		}
		trocarClube(); //chama a function que troca a imagem e as cores
	}
}
//chama function que verifica se cliente já selecionou clube anteriormente
verificarClube();

function boasVindas() {
	localStorage.getItem('boasVindas', 0);
	let contador = Number(localStorage.getItem('boasVindas'));
	if(contador == 0) {
		document.getElementById('outBoasVindas').textContent = `Muito Bem-Vindo! Esta é a sua primeira visita ao nosso site`;
 		contador = Number(localStorage.getItem('boasVindas'))+1;
		localStorage.setItem('boasVindas', contador);
	} else {
		contador = Number(localStorage.getItem('boasVindas'))+1;
		localStorage.setItem('boasVindas', contador);
		document.getElementById('outBoasVindas').textContent = `Que bom que você voltou! Esta é a sua visita de número ${contador} ao nosso site`;
	}
}
boasVindas();


/*	Exercício proposto para ser resolvido pelo leitor sem respostas.
 *	Proposta:
 *	Acrescentar no site da loja de esportes um contador de visitas do cliente ao site. Assim, na primeira visita do cliente à loja, exibir em um parágrafo(foi utilizado um título h3) do site a mensagem;
 *	Muito Bem-vindo!Está é a sua primeira visita ao nosso site.
 *
 *	Nas próximas visitas, exibir:
 *	Que bom que você voltou! Esta é a sua visita de número X ao nosso site.*/
