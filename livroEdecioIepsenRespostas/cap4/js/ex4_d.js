function criarEstrelas() {
	let inNumeroEstrelas = document.getElementById("inNumeroEstrelas");
	let outEstrelas = document.getElementById("outEstrelas");

	let numeroEstrelas = Number(inNumeroEstrelas.value);

	if(numeroEstrelas == 0 || isNaN(numeroEstrelas)) {
		alert(`Informe um número válido...`);
		inNumeroEstrelas.focus();
		return;
	}
	let criaEstrela = ``;
	let concatenaEstrela = ``;
	for(let i = 1; i<=numeroEstrelas; i++) {
		criaEstrela += `*`;
		concatenaEstrela += `${criaEstrela}\n`;
	}
		outEstrelas.textContent = concatenaEstrela;
}	
let btCriarEstrelas = document.getElementById("btCriarEstrelas");
btCriarEstrelas.addEventListener("click", criarEstrelas);
