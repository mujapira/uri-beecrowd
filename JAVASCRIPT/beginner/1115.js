"use strict"

//https://www.urionlinejudge.com.br/judge/en/problems/view/1099

var input = require('fs').readFileSync('./input.txt', 'utf8');
var lines = input.split('\n');

var x;
var y;
for (let i = 0; i < lines.length; i++) {
    let a = lines[i].split(" ").map(num => Number(num));
    x = a[0]
    y = a[1]
    let quadrante;
    if (x > 0 && y > 0) {
        quadrante = "primeiro";
    } else if (x > 0 && y < 0) {
        quadrante = "quarto";
    } else if (x < 0 && y > 0) {
        quadrante = "segundo";
    } else if (x < 0 && y < 0) {
        quadrante = "terceiro";
    } else if (x == 0 || y == 0) {
        break
    }
    console.log(quadrante)
}