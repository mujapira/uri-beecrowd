"use strict"

//https://www.urionlinejudge.com.br/judge/en/problems/view/1132

var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');

var maior;
var menor;
var soma = 0
var a = Number(lines[0]);
var b = Number(lines[1]);
if (a > b) {
    maior = a
    menor = b
} else if (a < b) {
    menor = a
    maior = b
}
for (let i = menor; i <= maior; i++) {
    if (i % 13 !== 0) {
        soma = soma + i
    }
}
console.log(soma)
