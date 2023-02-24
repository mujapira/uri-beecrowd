"use strict"
//https://www.urionlinejudge.com.br/judge/en/problems/view/1145
var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');

var soma = 0;
let i = 0;
var a = Number(lines[i]);
while (a > 0) {
    soma = soma + a;
    i++;
    a = Number(lines[i]);
}
console.log((soma/i).toFixed(2));