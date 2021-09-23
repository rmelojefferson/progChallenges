let calculo = [];

function showNumber(num) {
	calculo += num;
	document.getElementById("inCalc").value = calculo;
}
let zero = document.getElementById("number0");
zero.addEventListener("click", number0);

window.addEventListener("keydown", function (event){
	switch(event.key) {
		case "0":
			showNumber(0);
			break;
		case "1":
			showNumber(1);
			break;
		case "2":
			showNumber(2);
			break;
		case "3":
			showNumber(3);
			break;
		case "4":
			showNumber(4);
			break;
		case "5":
			showNumber(5);
			break;
		case "6":
			showNumber(6);
			break;
		case "7":
			showNumber(7);
			break;
		case "8":
			showNumber(8);
			break;
		case "9":
			showNumber(9);
			break;
		case ".":
			showNumber(".");
			break;
		case ",":
			showNumber(".");
			break;
		case "(":
			showNumber("(");
			break;
		case ")":
			showNumber(")");
			break;
	}
});
