"use strict"

//https://www.urionlinejudge.com.br/judge/en/problems/view/1099

var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');

function enquadra(x, y) {
    if (x > 0 && y > 0) {
        return "primeiro";
    } else if (x > 0 && y < 0) {
        return "quarto";
    } else if (x < 0 && y > 0) {
        return "segundo";
    } else if (x < 0 && y < 0) {
        return "terceiro";
    }
    return null
}

for (let i = 0; i < lines.length; i++) {
    let a = lines[i].split(" ").map(num => Number(num));
    let quadrante = enquadra(a[0], a[1]);
    if (quadrante == null) {
        break
    }
    console.log(quadrante)
}
