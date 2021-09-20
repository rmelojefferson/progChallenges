function valorApagar(){
	let inValor15min = document.getElementById("inValor15min");
	let inTempoDeUso = document.getElementById("inTempoDeUso");
	let outPreco = document.getElementById("outPreco");

	let valor15min = Number(inValor15min.value);
	let tempoDeUso = Number(inTempoDeUso.value);
	let valor = Math.ceil((tempoDeUso/15))*valor15min;
	outPreco.textContent = `Valor a Pagar R$: ${valor.toFixed(2)}`;
}

let btCalcularValor = document.getElementById("btCalcularValor");
btCalcularValor.addEventListener("click", valorApagar);


/* 
 *Exercício proposto para ser resolvido pelo leitor sem respostas.
 * Proposta:
 * Elaborar um programa para uma lan house de um aeroporto - O programa deve ler o valor de cada 15 minutos de uso de um computador e o tempo de uso por um cliente em minutos. Informe o valor a ser pago pelo cliente, sabendo que as fraçoes extras de 15 minutos devem ser cobradas de forma integral. 
 Ex: 15 minutos de uso = R$2,00
 30 minutos de uso do cliente = R$4,00
 35 minutos de uso do cliente = R$6,00 - Se os minutos não forem multiplos de 15, cobrar o valor cheio dos minutos que ultrapasserem o último multiplo.
 */
