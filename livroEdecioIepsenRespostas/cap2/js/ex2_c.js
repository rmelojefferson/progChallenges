function verPromocao() {
	let inProduto = document.getElementById("inProduto");
	let inPreco = document.getElementById("inPreco");
	let outTitulo = document.getElementById("outTitulo");
	let outPromocao = document.getElementById("outPromocao");
	
	let preco = Number(inPreco.value);
	let produtoDesconto = preco*0.5
	let valorPromocional = (preco*2)+produtoDesconto;
	outTitulo.textContent = `${inProduto.value} - Promocação: Leve 3 por R$: ${valorPromocional.toFixed(2)}`;
	outPromocao.textContent = `O 3º produto custa R$: ${produtoDesconto.toFixed(2)}`;
}
let btVerPromocao = document.getElementById("btVerPromocao");
btVerPromocao.addEventListener("click", verPromocao);

/*
    Um supermercado está com uma promoção - Para aumentar suas vendas no setor de higiene, cada etiqueta de produto deve exibir uma mensagem anunciando 50% de desconto(para um item) na compra de três unidades do produto. 
    Elaborar um programa que leia descrição e preço de um produto. Após, apresente as mensagens indicando a promoção - conforme o exemplo ilustrado.
*/
