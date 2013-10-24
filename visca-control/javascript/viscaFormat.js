outlets : 1;

function position() {
var pos = arrayfromargs(arguments);
outlet(0,81, 01, 06, 02,1,1,  pos[2],pos[3],pos[4],pos[5],pos[6],pos[7],pos[8],pos>[9],'ff')
}
function shutter() {
var shut = arrayfromargs(arguments);
outlet(0, 81, 1, 4, 39, 3, 'FF')
outlet(0, 81 , 01 , 04 , '4A' , 0 , 0 , shut[4] , shut[5] , 'ff')
	}
function iris() {
var ir = arrayfromargs(arguments);
outlet(0, 81, 1, 4, 39, 3, 'FF')
outlet(0, 81 , 01 , 04 , '4B' , 0 , 0 , ir[4] , ir[5] , 'ff')
}
function gain() {
var ga = arrayfromargs(arguments);
outlet(0, 81, 1, 4, 39, 3, 'FF')
outlet(0, 81 , 01 , 04 , '4C' , 0 , 0 , ga[4] , ga[5] , 'ff')
}
function WB() {
var wb = arrayfromargs(arguments);
outlet(0,81, 01, 04, 35 , wb[2] , 'ff')
}
function focus() {
var foc = arrayfromargs(arguments);
outlet(0, 81, 1, 4, 38, 3, 'FF')
outlet(0,81, 01, 04, 48, foc[2],foc[3],foc[4],foc[5],'ff')
}
function nearlimit() {
var nl = arrayfromargs(arguments);
outlet(0, 81, 1, 4, 38, 3, 'FF')
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
outlet(0,  81, 1, 4, 35, 5 , 'FF')
outlet(0,81, 01, 04, 43 , 00 , 00 , rg[4] , rg[5] , 'ff')
}
function bgain() {
var bg= arrayfromargs(arguments);
outlet(0,  81, 1, 4, 35, 5 , 'FF')
outlet(0,81, 01, 04, 44 , 00 , 00 , bg[4] , bg[5] , 'ff')
}
function fx() {
var ffxx= arrayfromargs(arguments);
outlet(0,81, 01, 04, 63 , ffxx[2] , 'ff')
}
function chromasuppress() {
var chs= arrayfromargs(arguments);
outlet(0,81, 01, 04, '5F' , chs[2] , 'ff')
}
function IR() {
var irm= arrayfromargs(arguments);
outlet(0,81, 01, 04, 01 , irm[2] , 'ff')
}
function focuscorrection() {
var foco= arrayfromargs(arguments);
outlet(0,81, 50, foco[2] , 'ff')
}
function WD() {
var widy= arrayfromargs(arguments);
outlet(0,81, 01,04,'3D', widy[2] , 'ff')
}