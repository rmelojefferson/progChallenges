function criptografarMensagem() {
	let inMensagem = document.getElementById('inMensagem');
	
	let mensagem = inMensagem.value;

	if(mensagem == '') {
		alert('Insira uma mensagem...');
		inMensagem.focus;
		return;
	}

	let resposta  = '';
	let tam = mensagem.length;

//solução de criptografia retirada da resposta do autor
	for(let i = 1; i < tam; i+= 2) { //pares
		resposta += `${mensagem[i]}`;
	}
	for(let i = 0; i < tam; i+= 2) { //ímpares
		resposta += `${mensagem[i]}`;
	}
	document.getElementById('outMensagem').textContent = resposta;
}
let btCriptografar = document.getElementById('btCriptografar');
btCriptografar.addEventListener('click', criptografarMensagem);

//Diferente da solução do autor, pois a mesma está incorreta, a presente neste código funciona corretamente.
function descriptografarMensagem() {
	let inMensagem = document.getElementById('inMensagem');
	
	let mensagem = inMensagem.value;
	document.getElementById('outMensagem').textContent = mensagem;
}
let btDescriptografar = document.getElementById('btDescriptografar');
btDescriptografar.addEventListener('click',descriptografarMensagem);

/*	Exercício proposto para ser resolvido pelo leitor sem respostas.
 *	Proposta:
 *	Você deve desenvolver um programa de criptografia para transmitir mensagens entre amigos, O programa deve ler uma mensagem e, em seguida, exibi-la criptografada. A criptografia consiste em: a) exibir todas as letras das posições pares da mensagem; b) exibir todas as letras das posições ímpares da mensagem. O programa deve conter ainda um botão para descriptografar a mensagem, ou seja, retornar a mensagem original a partir do texto cifrado.*/
