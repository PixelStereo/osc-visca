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
var zo = arrayfromargs(arguments);
outlet(0,81, 01, 04, 47, zo[2],zo[3],zo[4],zo[5],'ff')
}
function gamma() {
var ga = arrayfromargs(arguments);
outlet(0,81, 01, 04, '5B' , ga[2] , 'ff')
}
function slowshutter() {
var slsh = arrayfromargs(arguments);
outlet(0,81, 01, 04, '5A' , slsh[2] , 'ff')
}
function rgain() {
var rg= arrayfromargs(arguments);
outlet(0,81, 01, 04, 43 , 00 , 00 , rg[4] , rg[5] , 'ff')
}
function bgain() {
var bg= arrayfromargs(arguments);
outlet(0,81, 01, 04, 44 , 00 , 00 , rg[4] , rg[5] , 'ff')
}
function fx() {
var ffxx= arrayfromargs(arguments);
outlet(0,81, 01, 04, 63 , ffxx[2] , 'ff')
}
function chromasuppress() {
var chs= arrayfromargs(arguments);
outlet(0,81, 01, 04, '5F' , chs[2] , 'ff')
}