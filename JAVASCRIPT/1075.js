"use strict"

//https://www.urionlinejudge.com.br/judge/en/problems/view/1074

var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');

const a = Number(lines[0]);
for (let i = 1; i <= 10; i++) {
let mult = i * a;
console.log(`${i} x ${a} = ${mult}`)
}