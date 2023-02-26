"use strict"

//https://www.urionlinejudge.com.br/judge/en/problems/view/1099

var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');

const a = Number(lines[0]);
for (var i = 1; i <= a; i++) {
    var b = lines[i].split(" ").map(num => Number(num));
    var maior, menor;
    var soma = 0
    if (b[0] >= b[1]) {
        maior = b[0]
        menor = b[1]
    } else {
        maior = b[1]
        menor = b[0]
    }
    for (let j = menor + 1; j < maior; j++) {
        if (j % 2 !== 0) {
            soma += j
        }
    }
    console.log(soma)
}