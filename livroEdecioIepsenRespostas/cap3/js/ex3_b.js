function verificarVelocidade(){
	let inVelocidadePermitida = document.getElementById("inVelocidadePermitida");
	let inVelocidadeCondutor = document.getElementById("inVelocidadeCondutor");
	let outResposta = document.getElementById("outResposta");

	let velocidadePermitida = Number(inVelocidadePermitida.value);
	let velocidadeCondutor = Number(inVelocidadeCondutor.value);
	let multaLeve = velocidadePermitida + (velocidadePermitida*0.20);


	if(velocidadeCondutor<=velocidadePermitida){
		outResposta.textContent = `Sem Multa`;
	}else if (velocidadeCondutor<=multaLeve){
		outResposta.textContent = `Multa Leve`;
		}else{
		outResposta.textContent = `Multa Grave!`;
	}
}

let btVerifica = document.getElementById("btVerifica");
btVerifica.addEventListener("click", verificarVelocidade);


/* 
 *Exercício proposto para ser resolvido pelo leitor sem respostas.
 * Proposta:
 * Elaborar um programa que leia a velocidade permitida em uma estrada e a velocidade de um condutor. Se a velocidade for inferior ou igual à permitida, exiba * "Sem multa". Se a velocidade for de até 20% maior que a permitida, exiba "Multa leve".E, se a velocidade for superior a 20% da velocidade permitida, exiba "Multa Grave". */
