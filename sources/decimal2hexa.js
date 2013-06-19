	
/*
	convert hexa to decimal
*/

outlets = 1;
setinletassist(0,"single hexa to convert");
setoutletassist(0,"single decimal converted");

function decimal(d) {
	outlet(0, d.toString(16))
}