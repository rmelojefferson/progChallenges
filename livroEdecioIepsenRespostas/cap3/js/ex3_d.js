function mostrarTriangulo (){
	let inLadoA = document.getElementById("inLadoA");
	let inLadoB = document.getElementById("inLadoB");
	let inLadoC = document.getElementById("inLadoC");

	let outTriangulo = document.getElementById("outTriangulo");
	
	let ladoA = Number(inLadoA.value);
	let ladoB = Number(inLadoB.value);
	let ladoC = Number(inLadoC.value);
	
	let somaA = ladoB+ladoC
	let somaB = ladoA+ladoC
	let somaC = ladoA+ladoB

	if(ladoA>somaA || ladoB>somaB || ladoC>somaC){
		outTriangulo.textContent = `Não é possível formar um triângulo com esses dados, um dos lados é maior do que a soma dos outros dois`;
		inLadoA.focus();
		return;
	}

	if(ladoA==ladoB && ladoA==ladoC){
		//Todos os lados iguais = Equilátero
		outTriangulo.textContent = `Essas medidas formam um triângulo equilátero`
	}else if(ladoA!=ladoB && ladoA!=ladoC && ladoB!=ladoC){
		//Todos os lados diferentes = Escaleno
		outTriangulo.textContent = `Essas medidas formam um triângulo escaleno`
	}else{
		//2 lados iguais = Isóceles
		outTriangulo.textContent = `Essas medidas formam um triângulo isóceles`
	}

}
let btVerificar = document.getElementById("btVerificar");
btVerificar.addEventListener("click", mostrarTriangulo)

/*Elaborar um programa que leia três lados e verifique se eles podem ou não formar um triângulo. Para formar um triângulo, um dos lados não pode ser maior que a soma dos outros dois. Caso possam formar um triângulo, exiba também qual o tipo do triângulo: Equilátero(3 lados iguais), Isósceles(2 lados iguais) e Escaleno(3 lados diferentes).*/
