"use strict"

//https://www.urionlinejudge.com.br/judge/en/problems/view/1145

var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');

var soma = 0
let a = Number(lines[0]);
for (let i = 1; i < lines.length; i++) {
    let b = Number(lines[i]);
    if (b > a) {
        let j = a
        while (soma < b) {
            soma += j
            j++
        }
        console.log(j - a)
    }
}