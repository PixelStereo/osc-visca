	
/*
	convert single decimal to hexa 
*/

outlets = 1;
setinletassist(0,"single decimal to convert");
setoutletassist(0,"single hexaconverted");

function decimal(d) {
	outlet(0, d.toString(16))
}