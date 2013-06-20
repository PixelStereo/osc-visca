outlets : 1;

function position() {
var bla = arrayfromargs(arguments);
outlet(0,81, 01, 06, 02,10,10,  bla[3],bla[4],bla[5],bla[6],bla[7],bla[8],bla[9],bla[10],'ff')
}
function shutter() {
var shut = arrayfromargs(arguments);
outlet(0, 81 , 01 , 04 , '4A' , 0 , 0 , shut[4] , shut[5] , 'ff')
	}
function iris() {
var ir = arrayfromargs(arguments);
outlet(0, 81 , 01 , 04 , '4B' , 0 , 0 , ir[4] , ir[5] , 'ff')
}
function gain() {
var ga = arrayfromargs(arguments);
outlet(0, 81 , 01 , 04 , '4C' , 0 , 0 , ga[4] , ga[5] , 'ff')
}
function WB() {
var wb = arrayfromargs(arguments);
outlet(0,81, 01, 04, 35 , wb[2] , 'ff')
}
function focus() {
var foc = arrayfromargs(arguments);
outlet(0,81, 01, 04, 48, foc[2],foc[3],foc[4],foc[5],'ff')
}
function nearlimit() {
var nl = arrayfromargs(arguments);
outlet(0,81, 01, 04, 28, nl[2],nl[3],nl[4],nl[5],'ff')
}
function zoom() {
var bla = arrayfromargs(arguments);
outlet(0,81, 01, 04, 47, bla[2],bla[3],bla[4],bla[5],'ff')
}