let calculo = [];

function showNumber(num) {
	calculo += num;
	document.getElementById("inCalc").value = calculo;
}

let numbers = document.querySelectorAll(".numbers");
numbers.forEach(function(number) {
	number.addEventListener("click", function(num){
		let value = num.target.dataset.num;
		showNumber(value);
	});
});

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
		case "+":
			showNumber("+");
			break;
		case "-":
			showNumber("-");
			break;
		case "*":
			showNumber("*");
			break;
		case "/":
			showNumber("/");
			break;
		case "Enter":
			result();
			break;
		case "Delete":
			location.reload();
			break;
	}
});
function result() {
	inCalc = document.getElementById("inCalc").value;
	value = eval(inCalc);
	calculo = [];
	showNumber(value);
}
let equal = document.getElementById("equal");
equal.addEventListener("click", result);

let clean = document.getElementById("clean") 
clean.addEventListener("click", function() {
	location.reload();
});

let github = document.getElementById("github");
github.addEventListener("mouseenter", function() {
	github.src = "./img/githubWhite.png";
});

github.addEventListener("mouseout", function() {
	github.src = "./img/githubPurple.png";
});

let linkedin = document.getElementById("linkedin");
linkedin.addEventListener("mouseenter", function() {
	linkedin.src = "./img/linkedinWhite.png";
});


linkedin.addEventListener("mouseout", function() {
	linkedin.src = "./img/linkedinPurple.png";
});
