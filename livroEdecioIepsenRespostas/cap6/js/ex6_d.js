function verificarMulta() {
	let inData = document.getElementById('inData');
	let inValor = document.getElementById('inValor');
	let outRespostaData = document.getElementById('outRespostaData');
	let outRespostaValor = document.getElementById('outRespostaValor');

	let data = inData.value;
	let valor = Number(inValor.value);
	
	if(data == '' || valor == '' || valor == 0) {
		alert('Insira a data da infração e o valor da multa...');
		inData.focus();
		return;
	}
	
	let dataInfracao = new Date();
	let dataEmPartes = data.split('-');
	dataInfracao.setDate(Number(dataEmPartes[2]));
	dataInfracao.setMonth(Number(dataEmPartes[1])+2);
	dataInfracao.setFullYear(Number(dataEmPartes[0]));

	let dia = dataInfracao.getDate();
	let mes = dataInfracao.getMonth()+1;
	let ano = dataInfracao.getFullYear();
		
	let multaDesconto = valor-(valor*0.20);
	
	dia = Number(dia) < 10 ? `0${dia}` : dia;
	mes = Number(mes) < 10 ? `0${mes}` : mes;
	ano = dataEmPartes[1] >= 10 ? ano+1 : ano;

	outRespostaData.textContent = `Data limite para pagamento com desconto:${dia}/${mes}/${ano}`;
	outRespostaValor.textContent = `Valor com desconto R$:${multaDesconto.toFixed(2)}`;
}
let btCalcular = document.getElementById('btCalcular');
btCalcular.addEventListener('click', verificarMulta);



/*	Exercício proposto para ser resolvido pelo leitor sem respostas.
 *	Proposta:
 *	Suponha que o prazo para o pagamento de um infração de trânsito com desconto seja de 90 dias. Elaborar um programa que leia a data de uma infração e o valor da multa. Informe qual a data limite do pagamento com desconto(até 90 dias) e o valor a ser pago até essa data(com 20% de desconto).*/
