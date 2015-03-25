	
/*
	convert single hexa to decimal
*/

outlets = 1;
setinletassist(0,"single hexa to convert");
setoutletassist(0,"single decimal converted");

function hexa(h) {
	outlet(0, parseInt(h,16))
}
	