"use strict"
//https://www.urionlinejudge.com.br/judge/en/problems/view/1073
var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');
var dois = 2;
const a = Number(lines[0]);
for (var i = 2; i <= a; i += 2) {
    var penis = i**2;
    console.log(`${i}^${dois} = ${penis}`)
}