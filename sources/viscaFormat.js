outlets : 1;

function position() {
var pos = arrayfromargs(messagename,arguments);
outlet(0,'position',81, 01, 06, 02,10,10,  pos[3],pos[4],pos[5],pos[6],pos[7],pos[8],pos[9],pos[10],'ff')
}
function shutter() {
var pos = arrayfromargs(messagename,arguments);
outlet(0,'shutter', 81 , 01 , 04 , '4A' , 0 , 0 , pos[5] , pos[6] , 'ff')
	}
function iris() {
var pos = arrayfromargs(messagename,arguments);
outlet(0,'iris', 81 , 01 , 04 , '4B' , 0 , 0 , pos[5] , pos[6] , 'ff')
}
function gain() {
var pos = arrayfromargs(messagename,arguments);
outlet(0,'iris', 81 , 01 , 04 , '4C' , 0 , 0 , pos[5] , pos[6] , 'ff')
}
function WB() {
var pos = arrayfromargs(messagename,arguments);
outlet(0,'WB',81, 01, 04, 35 , pos[3] , 'ff')
}
function focus() {
var pos = arrayfromargs(messagename,arguments);
outlet(0,'focus',81, 01, 04, 48, pos[3],pos[4],pos[5],pos[6],'ff')
}
function nearlimit() {
var pos = arrayfromargs(messagename,arguments);
outlet(0,'nearlimit',81, 01, 04, 28, pos[3],pos[4],pos[5],pos[6],'ff')
}
function zoom() {
var pos = arrayfromargs(messagename,arguments);
outlet(0,'zoom',81, 01, 04, 47, pos[3],pos[4],pos[5],pos[6],'ff')
}