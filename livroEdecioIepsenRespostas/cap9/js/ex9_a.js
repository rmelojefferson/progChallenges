function confereIdade() {
	let inIdade = document.getElementById('inIdade');

	let idade = Number(inIdade.value);
	if(idade === '' || isNaN(idade) || idade < 1 || idade > 120) {
		alert('Insira uma idade entre 1 ano e 120 anos');
		inIdade.focus();
		return;
	}
	
	let idadeArr = inIdade.value.split('');
	
	for(let i = 0; i < idadeArr.length; i++) {
		exibirVelas(idadeArr[i]);
	}
}
let btExibir = document.getElementById('btExibir');
btExibir.addEventListener('click', confereIdade);

function exibirVelas(idade) {
	let body = document.getElementsByTagName('body')[0];
	let img = document.createElement('img');
	
	img.className = 'numeros';
	img.src = `./img/${idade}.jpg`;
	img.alt = `número ${idade}`;
	body.appendChild(img);
	btExibir.disabled = true;
	btNovasVelas.focus();
}

let btNovasVelas = document.getElementById('btNovasVelas');
btNovasVelas.addEventListener('click', function() {
	location.reload();
});


/*	Exercício proposto para ser resolvido pelo leitor sem respostas.
 *	Proposta:
 *	Criar dez imagens de números (de 0 a9) como se fossem velas de aniversário. Em seguida, elaborar um programa que leia uma idade e insira as imagens correspondentes na página conforme o número informado. O programa deve permitir idades entre 1 e 120 anos.
 */	
