"use strict"

//https://www.urionlinejudge.com.br/judge/en/problems/view/1132

var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');

var maior;
var menor;
var a = Number(lines[0]);
var b = Number(lines[1]);
if (a > b) {
    maior = a
    menor = b
} else if (a < b) {
    menor = a
    maior = b
}
for (let i = menor + 1; i <= maior - 1; i++) {
    if (i % 5 == 2 || i % 5 == 3) {
        console.log(i)
    }
}
