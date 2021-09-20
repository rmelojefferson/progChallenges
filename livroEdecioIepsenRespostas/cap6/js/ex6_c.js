function verificarPalindromo() {
	let inFrase = document.getElementById('inFrase');
 	let outResposta = document.getElementById('outResposta');
	let frase = inFrase.value.toUpperCase();
	let fraseSemEspacos = frase.replace(/ /g,'');
	let fraseReverse =  fraseSemEspacos.split('').reverse();
	let fraseOriginal =  fraseSemEspacos.split('').slice();
	let resposta = '';

	 for(let i = 0; i < fraseSemEspacos.length; i++) {
		 if(fraseReverse[i] !== fraseOriginal[i]) {
			 break;
		 }else {
			 resposta += fraseSemEspacos[i];	
		 }
	 }
	if(resposta === fraseSemEspacos) {
		outResposta.textContent = `${frase} é um palíndromo`
	}else {
		outResposta.textContent =`${frase} não é um palíndromo`;
	}

}       
let btVerificar = document.getElementById('btVerificar');
btVerificar.addEventListener('click', verificarPalindromo);
 
/*      Exercício proposto para ser resolvido pelo leitor sem respostas.
 *      Proposta:
 *      Uma palavra ou frase é um palíndromo quando pode ser lida nos dois sentidos, como RADAR, MUSSUM, ABBA. Elaborar um programa que leia uma frase e i    nforme se ela é ou não um palíndromo(converter a frase para caixa alta).*/

