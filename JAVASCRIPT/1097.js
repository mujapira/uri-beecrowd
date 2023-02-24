"use strict"

//https://www.urionlinejudge.com.br/judge/en/problems/view/1080

var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');


function salva(param) {
    param = Number(param.toFixed(1))
    var novo = String(param).split(".");
    if (Number(novo[1]) > 0) {
        return param.toFixed(1)
    }
    return param.toFixed(0)
}
var m = 0
for (var i = 0; i <= 2; i += 0.2) {
    for (var j = 1 + m; j <= 3 + m; j++) {
        console.log((`I=${salva(i)} J=${salva(j)}`))
    }
    m += 0.2
}