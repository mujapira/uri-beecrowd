"use strict"

//https://www.urionlinejudge.com.br/judge/en/problems/view/1080

var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');
var miau = 0
var maior = 0
for (var i = 0; i < lines.length; i++) {
    var a = Number(lines[i]);
    if ( a > maior) {
        maior = a
        miau = i + 1
    }
}
console.log(`${maior}\n${miau}`);