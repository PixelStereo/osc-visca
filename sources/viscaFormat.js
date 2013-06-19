outlets : 1;

function position() {
var pos = arrayfromargs(messagename,arguments);
outlet(0,'position',81, 01, 06, 02,10,10,  pos[3],pos[4],pos[5],pos[6],pos[7],pos[8],pos[9],pos[10],'ff')
}
function shutter() {
var shut = arrayfromargs(messagename,arguments);
outlet(0,'shutter', 81 , 01 , 04 , '4A' , 0 , 0 , shut[5] , shut[6] , 'ff')
	}
function iris() {
var ir = arrayfromargs(messagename,arguments);
outlet(0,'iris', 81 , 01 , 04 , '4B' , 0 , 0 , ir[5] , ir[6] , 'ff')
}
function gain() {
var ga = arrayfromargs(messagename,arguments);
outlet(0,'gain', 81 , 01 , 04 , '4C' , 0 , 0 , ga[5] , ga[6] , 'ff')
}
function WB() {
var wb = arrayfromargs(messagename,arguments);
outlet(0,'WB',81, 01, 04, 35 , wb[3] , 'ff')
}
function focus() {
var foc = arrayfromargs(messagename,arguments);
outlet(0,'focus',81, 01, 04, 48, foc[3],foc[4],foc[5],foc[6],'ff')
}
function nearlimit() {
var nl = arrayfromargs(messagename,arguments);
outlet(0,'nearlimit',81, 01, 04, 28, nl[3],nl[4],nl[5],nl[6],'ff')
}
function zoom() {
var zo = arrayfromargs(messagename,arguments);
outlet(0,'zoom',81, 01, 04, 47, zo[3],zo[4],zo[5],zo[6],'ff')
}