function mostrarTempoEstacionamento(){
	let inValor = document.getElementById("inValor");
	let outTempo = document.getElementById("outTempo");
	let outTroco = document.getElementById("outTroco");

	let valor = Number(inValor.value);
	let troco = "";

	if(valor>=3){
		outTempo.textContent = `Tempo: 2 horas`;
		troco = valor-3
	}else if(valor>=1.75){
		outTempo.textContent = `Tempo: 1 hora`;
		troco = valor-1.75
	}else{
		outTempo.textContent = `Tempo: 30 minutos`;
		troco = valor-1
	}

	troco = troco>0 ? outTroco.textContent = `Troco R$:${troco.toFixed(2)}` : outTroco.textContent = ``;
}
let btVerificar = document.getElementById("btVerificar");
btVerificar.addEventListener("click", mostrarTempoEstacionamento);
/*
 * Elaborar um programa para simular um parquímetro, o qual leia o valor de moedas depositado em um terminal de estacionamento rotativo. O programa deve informar o tempo de permanência do veículo no local e o troco(se existir).
 * */
