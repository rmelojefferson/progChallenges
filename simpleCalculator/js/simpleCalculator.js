let calculo = "";

function showNumber(num) {
	let inCalc = document.getElementById("inCalc");
	calculo += num;
	inCalc.value = calculo;
}
let numbers = document.querySelectorAll(".numbers");
numbers.forEach(function(number) {
	number.addEventListener("click", function(num){
		let value = num.target.dataset.num;
		showNumber(value);
	});
});

function result() {
	let inCalc = document.getElementById("inCalc");
	let value = eval(inCalc.value);

	if(inCalc.value === "" || isNaN(value)) {
		calculo = "";
		inCalc.value = "";
		return;
	}
	calculo = "";
	showNumber(value);
}
let equal = document.getElementById("equal");
equal.addEventListener("click", result);

function backspace() {
	let inCalc = document.getElementById("inCalc");
	let calc = inCalc.value;
	let calcString = calc.slice(0, calc.length -1);
	calculo = "";
	showNumber(calcString);
}

function clean() {
	location.reload();
}
let btnClean = document.getElementById("clean") 
btnClean.addEventListener("click", clean);

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
		case "Backspace":
			backspace();
			break;
		case "Delete":
			location.reload();
			break;
	}
});
let theme = document.getElementById("theme");
theme.addEventListener("click", function () {
	let bodyTheme = document.body;
	let lightmode = bodyTheme.classList.toggle("light-mode");
	if(lightmode) {
		theme.style.color = "#000000";
		theme.innerHTML = "&#9789";
		
		github.addEventListener("mouseenter", function() {
			github.src = "./img/githubBlack.png";
		});
		
		linkedin.addEventListener("mouseenter", function() {
			linkedin.src = "./img/linkedinBlack.png";
		});
	} else {
		theme.style.color = "#FFFF00";
		theme.innerHTML = "&#9728";
		
		github.addEventListener("mouseenter", function() {
			github.src = "./img/githubWhite.png";
		});
		
		linkedin.addEventListener("mouseenter", function() {
			linkedin.src = "./img/linkedinWhite.png";
		});
	}
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
