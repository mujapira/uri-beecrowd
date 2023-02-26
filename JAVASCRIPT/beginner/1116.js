"use strict"

//https://www.urionlinejudge.com.br/judge/en/problems/view/1099

var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');

function divide(x, y) {
    if (y === 0) {
        return "divisao impossivel"
    }
    return (x / y).toFixed(1)
}

const a = Number(lines[0]);
for (let i = 1; i <= a; i++) {
    let b = lines[i].split(" ").map(num => Number(num));
    let divisao = divide(b[0], b[1])
    console.log(divisao)
}
