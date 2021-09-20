function backgroundColor() {
	let colorArr = 'ABCDEF0123456789';
	let color = ''

	for(let i = 0; i < 6; i++) {
		let randomColor = Math.floor(Math.random()*colorArr.length);
		color += colorArr.charAt(randomColor);
	}
	document.body.style.backgroundColor = `#${color}`;
	document.getElementById('colorName').value = `#${color}`;
	document.getElementById('colorPicker').value = `#${color}`;
}
document.getElementById('btColor');
btColor.addEventListener('click', function() {
	backgroundColor();
});

	
